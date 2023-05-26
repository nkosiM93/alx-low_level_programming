#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include "main.h"

/**
 * _checkelf - checks if file is elf type
 *
 * @h: header
 *
 * Return: No Return
 */
void _checkelf(char *h)
{
	if (h[0] != 0x7f || h[1] != 'E' || h[2] != 'L' || h[3] != 'F')
		dprintf(STDERR_FILENO, "Error: Wrong file type\n"), exit(98);
}

/**
 * _magic - print elf magic
 *
 * @h: header
 *
 * Return: No Return
 */
void _magic(char *h)
{
	int i;

	printf("ELF Header:\n  Magic:   ");

	for (i = 0; i < 15; i++)
		printf("%02x ", (unsigned int)h[i]);
	printf("%02x", (unsigned int)h[i]);

	printf("\n");
}
/**
 * _class - print elf class
 *
 * @h: header
 * @x64: 1 if x64, 0 if x32
 *
 * Return: No Return
 */
void _class(char *h, int x64)
{
	if (h[4] != 1 && h[4] != 2)
	{
		printf("<unknown: %02hx>\n", h[4]);
		return;
	}
	printf("  %-35s", "Class:");
	if (x64 == 0)
		printf("ELF32\n");
	else if (x64 == 1)
		printf("ELF64\n");
}
/**
 * _data - print elf data
 *
 * @h: header
 *
 * Return: No Return
 */
void _data(char *h)
{
	printf("  %-35s", "Data:");
	printf("2's complement, ");
	if (h[5] == 1)
		printf("little endian\n");
	else if (h[5] == 2)
		printf("big endian\n");
	else
		printf("<unknown: %02hx>\n", h[5]);
}

/**
 * main - displays the information contained in the ELF header at
 * the start of an ELF file.
 *
 * Usage: elf_header elf_filename
 * displayed information: (not less, not more)
 * Magic
 * Class
 * Data
 * Version
 * OS/ABI
 * ABI Version
 * Type
 * Entry point address
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 *
 * Return: Always 0 on (Success)
 *
 * if the file is not an ELF file, or on error, exit with status code 98
 *  and display a comprehensive error message to stderr
 */
int main(int argc, char **argv)
{
	int fdelf, relf, closecheck, x64 = 0;
	char h[32];

	if (argc != 2)
		dprintf(STDERR_FILENO, "Wrong # of Arguments\n"), exit(98);
	if (argv[1] == 0)
		dprintf(STDERR_FILENO, "Null name\n"), exit(98);
	fdelf = open(argv[1], O_RDONLY);
	if (fdelf == -1)
		dprintf(STDERR_FILENO, "Can't Open File\n"), exit(98);
	relf = read(fdelf, h, 32);
	if (relf == -1)
		dprintf(STDERR_FILENO, "Error Reading File\n"), exit(98);

	_checkelf(h);

	if (h[4] == 2)
		x64 = 1;

	_magic(h);
	_class(h, x64);
	_data(h);
	_version(h);
	_os(h);
	_abiv(h);
	_type(h, x64);
	_entry(h, x64);

	closecheck = close(fdelf);

	if (closecheck == -1)
		dprintf(STDERR_FILENO, "Error Closing File\n"), exit(98);

	return (0);
}
