#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *main - cp a file to other.
 *@argc: num of args
 *@argv: args
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int f1, f2, wr;
	ssize_t lg = 1024;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	f2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (f2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while (lg == 1024)
	{
		lg = read(f1, buffer, 1024);
		if (lg == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98); }
		wr = write(f2, buffer, lg);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); }}
	if (close(f1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
		exit(100); }
	if (close(f2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
		exit(100); }
	return (0);
}
