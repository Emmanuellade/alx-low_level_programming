#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_address - prints address
 * @ptr: the pointer
 * Return: null
*/
void print_address(char *ptr)
{
	int t, u;
	char s;

	printf("  Entry point address:               0x");

	s = ptr[4] + '0';
	if (s == '1')
	{
		u = 26;
		printf("80");
		for (t = u; t >= 22; t--)
		{
			if (ptr[t] > 0)
				printf("%x", ptr[t]);
			else if (ptr[t] < 0)
				printf("%x", 256 + ptr[t]);
		}
		if (ptr[7] == 6)
			printf("00");
	}

	if (s == '2')
	{
		u = 26;
		for (t = u; t > 23; t--)
		{
			if (ptr[t] >= 0)
				printf("%02x", ptr[t]);

			else if (ptr[t] < 0)
				printf("%02x", 256 + ptr[t]);

		}
	}
	printf("\n");
}

/**
 * print_type - prints type
 * @ptr: the poiner
 * Return: null
*/
void print_type(char *ptr)
{
	char type = ptr[16];

	if (ptr[5] == 1)
		type = ptr[16];
	else
		type = ptr[17];

	printf("  Type:                              ");
	if (type == 0)
		printf("NONE (No file type)\n");
	else if (type == 1)
		printf("REL (Relocatable file)\n");
	else if (type == 2)
		printf("EXEC (Executable file)\n");
	else if (type == 3)
		printf("DYN (Shared object file)\n");
	else if (type == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", type);
}

/**
 * print_osabi - prints osabi
 * @ptr: the ppointer
 * Return: null
*/
void print_osabi(char *ptr)
{
	char osabi = ptr[7];

	printf("  OS/ABI:                            ");
	if (osabi == 0)
		printf("UNIX - System V\n");
	else if (osabi == 2)
		printf("UNIX - NetBSD\n");
	else if (osabi == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", osabi);

	printf("  ABI Version:                       %d\n", ptr[8]);
}


/**
 * print_version - prints version
 * @ptr: the pointer
 * Return: null
*/
void print_version(char *ptr)
{
	int p = ptr[6];

	printf("  version:                           %d", p);

	if (p == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}
/**
 * print_data - prints data
 * @ptr: the pointer
 * Return: null
*/
void print_data(char *ptr)
{
	char s = ptr[5];

	printf("  Data:                              2's complement");
	if (s == 1)
		printf(", little endian\n");

	if (s == 2)
		printf(", big endian\n");
}
/**
 * print_magic - prints magic info.
 * @ptr: the pointer
 * Return: null
*/
void print_magic(char *ptr)
{
	int y;

	printf("  Magic:  ");

	for (y = 0; y < 16; y++)
		printf(" %02x", ptr[y]);

	printf("\n");

}

/**
 * check_sys - check the version system.
 * @ptr: the pointer magic
 * Return: no return.
*/
void check_sys(char *ptr)
{
	char s = ptr[4] + '0';

	if (s == '0')
		exit(98);

	printf("ELF Header:\n");
	print_magic(ptr);

	if (s == '1')
		printf("  Class:                             ELF32\n");

	if (s == '2')
		printf("  Class:                             ELF64\n");

	print_data(ptr);
	print_version(ptr);
	print_osabi(ptr);
	print_type(ptr);
	print_address(ptr);
}

/**
 * check_elf - checks for an elf file.
 * @ptr: the pointer magic.
 * Return: 1 if it is an elf file. 0 if not.
*/
int check_elf(char *ptr)
{
	int elf = (int)ptr[0];
	char E = ptr[1];
	char L = ptr[2];
	char F = ptr[3];

	if (elf == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);

	return (0);
}

/**
 * main - main entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int fd, ret_read;
	char ptr[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}

	lseek(fd, 0, SEEK_SET);
	ret_read = read(fd, ptr, 27);

	if (ret_read == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}

	if (!check_elf(ptr))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}

	check_sys(ptr);
	close(fd);

	return (0);
}
