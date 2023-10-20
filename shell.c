#include "shell.h"
/**
 * main - Entry point for shell
 * @argc: used for argument count
 * @argv: used for aegument array
 *
 * Return: success
 */
int main(int argc __attribute__((unused)) , char **argv)
{
	char *buff_copy = NULL;
	char *buff = NULL;
	char **args = NULL;
	ssize_t nums;
	size_t m = 0;
	int toks_num, exit_lop = 1, cunt = 0;

	if (argc < 1)
	{
		return (-1);
	}
	signal(SIGINT, ctrl_c);
	while (exit_lop)
	{
		cunt++;
		exit_lop = _prompt();
		nums = getline(&buff, &m, stdin);

		if (nums ==-1)
		{
			errno = 0;
			return (-1);
		}
		buff_copy = _strdup(buff);
		toks_num = num_toks(buff_copy, DELIM);
		args = tokenise_line(buff, DELIM, toks_num);

		if (args[0] != NULL)
		{
			exec_commd(args, argv, cunt);
		}
	}
	if (nums < 0 && flag.action)
	{
		write(STDERR_FILENO, "\n", 1);
	}
	free(buff_copy);
	free_buff(args);
	return (0);
}
 
