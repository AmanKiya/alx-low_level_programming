#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to the POSIX std out.
 * @filename: the name of the file to be read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * 0 if the filename is NULL
 * 0 IF write fails or doesnot write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *print_field;
	int file, read_file;

	if (!filename)
		return (0);
	
	/* create the buffer print_field*/
	print_field = malloc(letters * sizeof(char));
	if (print_field == NULL)
		return (0);
	
	/*open the file*/
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	
	/*read the file and save in buffer*/
	read_file = read(file, print_field, letters);
	/*write as standard output*/
	write(STDOUT_FILENO, print_field, read_file);

	close(file);
	free(print_field);
	return (read_file);	
}
