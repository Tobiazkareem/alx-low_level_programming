#include "main.h"
#include <elf.h>

/**
 * print_elf_header_info - Print information from the ELF header.
 * @header: Pointer to the ELF header.
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;
    printf("Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x%c", header->e_ident[i], i < EI_NIDENT - 1 ? ' ' : '\n');

    printf("Class:                             %s\n",
           header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");

    printf("Data:                              %s\n",
           header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
           header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Invalid");

    printf("Version:                           %d (current)\n",
           header->e_ident[EI_VERSION]);

    printf("OS/ABI:                            ");
    switch (header->e_ident[EI_OSABI])
    {
    case ELFOSABI_SYSV:
        printf("UNIX - System V\n");
        break;
    case ELFOSABI_HPUX:
        printf("UNIX - HP-UX\n");
        break;
    case ELFOSABI_NETBSD:
        printf("UNIX - NetBSD\n");
        break;
    case ELFOSABI_LINUX:
        printf("UNIX - Linux\n");
        break;
    case ELFOSABI_SOLARIS:
        printf("UNIX - Solaris\n");
        break;
    case ELFOSABI_AIX:
        printf("UNIX - AIX\n");
        break;
    case ELFOSABI_IRIX:
        printf("UNIX - IRIX\n");
        break;
    case ELFOSABI_FREEBSD:
        printf("UNIX - FreeBSD\n");
        break;
    case ELFOSABI_TRU64:
        printf("UNIX - TRU64\n");
        break;
    case ELFOSABI_MODESTO:
        printf("Novell - Modesto\n");
        break;
    case ELFOSABI_OPENBSD:
        printf("UNIX - OpenBSD\n");
        break;
    default:
        printf("<unknown: 0x%02x>\n", header->e_ident[EI_OSABI]);
        break;
    }

    printf("ABI Version:                       %d\n",
           header->e_ident[EI_ABIVERSION]);

    printf("Type:                              ");
    switch (header->e_type)
    {
    case ET_NONE:
        printf("NONE (Unknown type)\n");
        break;
    case ET_REL:
        printf("REL (Relocatable file)\n");
        break;
    case ET_EXEC:
        printf("EXEC (Executable file)\n");
        break;
    case ET_DYN:
        printf("DYN (Shared object file)\n");
        break;
    case ET_CORE:
        printf("CORE (Core file)\n");
        break;
    default:
        printf("<unknown: %x>\n", header->e_type);
        break;
    }

    printf("Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - Entry point.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or 98 on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t read_bytes;
	Elf64_Ehdr elf_header;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return (98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        perror("Error");
        return (98);
    }

    read_bytes = read(fd, &elf_header, sizeof(Elf64_Ehdr));
    if (read_bytes != sizeof(Elf64_Ehdr))
    {
        perror("Error");
        close(fd);
        return (98);
    }

    if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
        elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
        elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
        elf_header.e_ident[EI_MAG3] != ELFMAG3)
    {
        fprintf(stderr, "Error: Not an ELF file\n");
        close(fd);
        return (98);
    }

    print_elf_header_info(&elf_header);
    close(fd);

    return (0);
}
