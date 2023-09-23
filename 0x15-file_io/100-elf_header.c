#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

void print_error_and_exit(const char *message) {
    fprintf(stderr, "%s\n", message);
    exit(98);
}

void print_elf_header_info(Elf64_Ehdr *header) {
	int i;
	printf("ELF Header:\n");
	printf(" Magic: ");

	for (i = 0; i < EI_NIDENT; i++) {
	printf("%02x", header->e_ident[i]);
        if (i == EI_NIDENT - 1) {
            printf("\n");
        } else {
            printf(" ");
        }
    }

    printf(" Class:                             ");
    switch (header->e_ident[EI_CLASS]) {
        case ELFCLASSNONE:
            printf("none\n");
            break;
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
    }

    printf(" Data:                              ");
    switch (header->e_ident[EI_DATA]) {
        case ELFDATANONE:
            printf("none\n");
            break;
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
    }

    printf(" Version:                           %d", header->e_ident[EI_VERSION]);
    switch (header->e_ident[EI_VERSION]) {
        case EV_CURRENT:
            printf(" (current)\n");
            break;
        default:
            printf("\n");
            break;
    }

    printf(" OS/ABI:                            ");
    switch (header->e_ident[EI_OSABI]) {
        case ELFOSABI_NONE:
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
        case ELFOSABI_IRIX:
            printf("UNIX - IRIX\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("UNIX - FreeBSD\n");
            break;
        case ELFOSABI_TRU64:
            printf("UNIX - TRU64\n");
            break;
        case ELFOSABI_ARM:
            printf("ARM\n");
            break;
        case ELFOSABI_STANDALONE:
            printf("Standalone App\n");
            break;
        default:
            printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
    }

    printf(" ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

    printf(" Type:                              ");
    switch (header->e_type) {
        case ET_NONE:
            printf("NONE (No file type)\n");
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
            printf("Unknown\n");
            break;
    }

    printf(" Entry point address:                %#lx\n", header->e_entry);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_error_and_exit("Usage: elf_header elf_filename");
    }

    const char *filename = argv[1];
    int fd;
    Elf64_Ehdr header;

    if ((fd = open(filename, O_RDONLY)) == -1) {
        print_error_and_exit("Error opening the file.");
    }

    if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        print_error_and_exit("Error reading the ELF header.");
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        print_error_and_exit("Not an ELF file.");
    }

    print_elf_header_info(&header);

    close(fd);

    return 0;
}
