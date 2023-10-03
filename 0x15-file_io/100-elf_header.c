#include "main.h"
#include <elf.h>

/**
 * elf_check - checks if the file is elf or not.
 *
 * @e_ident: an array holds some info of the elf file.
 * @argv: arguments of the command line.
 */

void elf_check(unsigned char *e_ident, char *argv[])
{
	if (e_ident[EI_MAG0] != 0x7f ||
			e_ident[EI_MAG1] != 'E' ||
			e_ident[EI_MAG2] != 'L' ||
			e_ident[EI_MAG3] != 'F')
	{
		dprintf(STDERR_FILENO, "%s is not an ELF file\n", argv[1]);
		exit(98);
	}
}

/**
 * print_magic - print magic numbers of ELF file (the first 4 bytes).
 *
 * @e_ident: an array holds some info of the elf file
 */

void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < 16; i++)
		printf("%02x ", e_ident[i]);
	printf("\n");
}

/**
 * print_class - prints the file's class.
 *
 * @e_ident: an array holds some info of the elf file.
 */

void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
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
			printf("unknown: %x\n", e_ident[EI_CLASS]);
			break;
	}
}

/**
 * print_data - prints the encoding of both the data structures used by object
 * file container and data contained in object file sections.
 *
 * @e_ident: an array holds some info of the elf file.
 */

void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
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
			printf("unknown: %x\n", e_ident[EI_DATA]);
			break;
	}
}

/**
 * print_version - prints the ELF header version number.
 *
 * @e_ident: an array holds some info of the elf file.
 */

void print_version(unsigned char *e_ident)
{
	printf("  Version:                           ");

	switch (e_ident[EI_VERSION])
	{
		case EV_NONE:
			printf("0 (invalid)\n");
			break;
		case EV_CURRENT:
			printf("1 (current)\n");
			break;
		default:
			printf("%d\n", e_ident[EI_VERSION]);
			break;
	}
}

/**
 * print_os_abi - prints the OS- or ABI-specific ELF extensions
 * used by this file.
 *
 * @e_ident: an array holds some info of the elf file.
 */

void print_os_abi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
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
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		default:
			printf("unknown: %x\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi_version - the version of the ABI to which the object is targeted.
 *
 * @e_ident: an array holds some info of the elf file.
 */

void print_abi_version(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
			e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints the object file type.
 *
 * @e_ident: an array holds some info of the elf file.
 * @e_type: identifies the object file type.
 */

void print_type(unsigned char *e_ident, uint16_t e_type)
{

	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (none)\n");
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
			printf("unknown: %x\n", e_type);
	}
}

/**
 * print_entryPoint_address - prints the entry point address.
 *
 * @e_ident: an array holds some info of the elf file.
 * @e_entry: the virtual address to which the system first transfers control,
 * thus starting the process.
 */

void print_entryPoint_address(unsigned char *e_ident, uint64_t e_entry)
{
	printf("  Entry point address:               ");

	/* check the data encoding and swap the byte order if needed */
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	/* check the file class and print the entry point accordingly */
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}


/**
 * main - Entry point of program.
 *
 * @argc: the number of arguments of the command line.
 * @argv: the arguments of the command line.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int fd, rd;
	Elf64_Ehdr *hdr;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Can not open %s\n", argv[1]), exit(98);

	hdr = malloc(sizeof(Elf64_Ehdr));
	if (hdr == NULL)
		dprintf(STDERR_FILENO, "Can not read %s\n", argv[1]), close(fd), exit(98);

	rd = read(fd, hdr, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		dprintf(STDOUT_FILENO, "Can not read %s\n", argv[1]);
		free(hdr), close(fd), exit(98);
	}

	elf_check(hdr->e_ident, argv);
	printf("ELF Header:\n");
	print_magic(hdr->e_ident);
	print_class(hdr->e_ident);
	print_data(hdr->e_ident);
	print_version(hdr->e_ident);
	print_os_abi(hdr->e_ident);
	print_abi_version(hdr->e_ident);
	print_type(hdr->e_ident, hdr->e_type);
	print_entryPoint_address(hdr->e_ident, hdr->e_entry);
	free(hdr);
	close(fd);
	return (0);
}
