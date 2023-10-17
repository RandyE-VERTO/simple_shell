#include "shell.h"
/**
 * print_environs - to print out environment viriable
 * @args: command vector
 *
 * Return: Always 0.
 */
void print_environs(char **args __attribute__((unused)))
{
	int j = 0;

	if (our_environ[j] !=NULL)
	{
		our_printf("%s\n", our_environ[j]);
		j++;
	}
}

//***************************** FOR CHANGE OF DIRECTORY ************************

void for_cd(char **args)
{
	if (args[1] == NULL)
	{
		perror("cd: Argument is missing\n");
	}
	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("_cd\n");
		}
	}
}