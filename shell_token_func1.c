#include "shell.h"

/**
 * order_dir - used to searchfor directory path
 * @ord: the vairiable argument (pointer to pointer)
 *
 * Return: Always 0 success.
 */

char *order_dir(char **ord)
{
	int j = 0;
	size_t input = 0;
	struct _status stat;
	char *orderPath = NULL;
	char *environsPath = NULL;
	char *cwd = NULL;
	char **pathtoks = NULL;

	environsPath = _getenvirons("PATH");
	pathToks = tokenise_PATH(environsPath, DELIM);
	cwd = _getcwd(NULL, input);

	if (cwd == NULL)
	{
		return (NULL);
	}
	while (pathToks[j] != NULL)
	{
		chngdir(pathToks[j]);
		if (_status(ord[0], &stat) == 0)
		{
			orderPath = add_to_directory(pathToks[j], ord, "/");
			break;
		}
		j++;
	}
	chngdir(cwd);
	free(pathToks);
	pathTks = NULL;
	return (orderPath);
}

/******************************** The NUMBER TOKENIZATION ************************************/
/**
 * num_toks - Use in finding the number of substring in string
 * @buffer: Pointer used for string tokenization
 * @delim: This is the delimiter variable in tokenization
 * REturn: To return the number of substrings found
 */
int num_toks(char *buffer, char *delim)
{
	int toks_num = 0;
	char *toks = NULL;

	toks = strtok(buffer, delim);
	toks_num++;

	while (toks != NULL)
	{
		toks = strtok(NULL, delim);
		toks_num++;
	}
	return (toks_num);
}



























