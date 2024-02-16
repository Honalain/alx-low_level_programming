#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

/**
 */
void printf_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}
void printf_elf_header_info(ELF64_Ehdr *header)
{
	printf(" Magic:  ");
	for (int i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x ", header->e_ident[i]);
	}
printf("\n");

printf("Class:%s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
printf("Data:%S\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
printf("OS/ABI:  %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Other");
printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
printf("Type: %s\n", (header->e_type == ET_EXEC) ? "Executable" : (header->e_type == ET_DYN) ? "Shared object" : "Other");
printf("Entry point address: %#lx\n", header->e_entry);
}

int main(int argc, char *argv[])
{
	const char *filename;
	int fd;

	if (argc != 2)
	{
		print_error("usage: elf_header elf_filename");
	}

	filename = argv[1];
	fd = open(filename, 0_RDONLY);

	if (fd == -1)
	{
		print_error(strerror(errno));
	}
	Elf64_Ehdr header;
	ssize_t bytes_read = read(fd, &header, sizeof(header));

	if (bytes_read != sizeof(header))
	{
		print_error("Error reading ELF header");
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
	}
	printf_elf_header_info(&header);
	close (fd);
	return(0);
}
