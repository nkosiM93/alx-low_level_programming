#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

/**
 * _version - print elf version
 *
 * @h: header
 *
 * Return: No Return
 */
void _version(char *h)
{
	printf("  %-35s", "Version:");
	if (h[6] == EV_CURRENT)
	{
		printf("%d (current)\n", h[6]);
	}
	else if (h[6] != EV_CURRENT)
	{
		printf("%d\n", h[6]);
	}
}
/**
 * _os - print elf os/ABI
 *
 * @h: header
 *
 * Return: No Return
 */
void _os(char *h)
{
	printf("  %-35s", "OS/ABI:");

	if (h[7] == 0)
		printf("UNIX - System V\n");
	else if (h[7] == 1)
		printf("UNIX - HP-UX\n");
	else if (h[7] == 2)
		printf("UNIX - NetBSD\n");
	else if (h[7] == 3)
		printf("UNIX - Linux\n");
	else if (h[7] == 4)
		printf("UNIX - GNU Hurd\n");
	else if (h[7] == 6)
		printf("UNIX - Solaris\n");
	else if (h[7] == 7)
		printf("UNIX - AIX\n");
	else if (h[7] == 8)
		printf("UNIX - IRIX\n");
	else if (h[7] == 9)
		printf("UNIX - FreeBSD\n");
	else if (h[7] == 10)
		printf("UNIX - Tru64\n");
	else if (h[7] == 11)
		printf("UNIX - Novell Modesto\n");
	else if (h[7] == 12)
		printf("UNIX - OpenBSD\n");
	else if (h[7] == 13)
		printf("UNIX - Open VMS\n");
	else if (h[7] == 14)
		printf("UNIX - NonStop Kernel\n");
	else if (h[7] == 15)
		printf("UNIX - AROS\n");
	else if (h[7] == 16)
		printf("UNIX - Fenix OS\n");
	else if (h[7] == 17)
		printf("UNIX - CloudABI\n");
	else
		printf("<unknown: %02hx>\n", h[7]);
}
/**
 * _abiv - checks abi version
 *
 * @h: header
 *
 * Return: No Return
 */
void _abiv(char *h)
{
	printf("  %-35s", "ABI Version:");
	printf("%d\n", h[8]);
}
/**
 * _type - print elf type
 *
 * @h: header
 * @x64: variable to check if x64 (1) or x32 (0)
 *
 * Return: No Return
 */
void _type(char *h, int x64)
{
	int xtype = 17;

	(void) x64;

	if (h[5] == 1)
		xtype = 16;

	printf("  %-35s", "Type:");

	switch (h[xtype])
	{
	case 0:
		printf("NONE\n");
		break;
	case 1:
		printf("REL (Relocatable file)\n");
		break;
	case 2:
		printf("EXEC (Executable file)\n");
		break;
	case 3:
		printf("DYN (Shared object file)\n");
		break;
	case 4:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown>: %02x\n", h[xtype]);
	}
}
/**
 * _entry - print elf entry point access by directly accesing
 * the elf header struct
 *
 * @h: header
 * @x64: check 1 for x64 and 0 x32
 *
 * Return: No Return
 */
void _entry(char *h, int x64)
{
	int count = 27, i;

	printf("  %-35s0x", "Entry point address:");

	if (x64 == 1)
		count = 31;

	if (h[5] == 1)
	{
		/* Little Endian */
		i = count;
		while (h[i] == 0 && i > 24)
			i--;
		printf("%x", h[i]);
		i--;

		while (i >= 24)
		{
			printf("%02x", (unsigned char) h[i]);
			i--;
		}
	}
	else
	{
		/* Big Endian */

		i = 24;
		while (h[i] == 0)
			i++;
		printf("%x", h[i]);
		i++;

		while (i <= count)
		{
			printf("%02x", (unsigned char) h[i]);
			i++;
		}
	}
	printf("\n");
}

