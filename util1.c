#include "shell.h"
/***************************** _Getenvirons *************************/
/**
 * _getenvirons - A function that gets environment path
 * @nam: Environment to get the path
 *
 * Return: A pointer to new environment variable.
 */
char _getenvirons(const char *nam)
{
	int size, j = 0;

	if (nam == NULL)
	{
		return (NULL);
	}
	size = stnrlen(nam);
	while (__environ[i] != NULL)
	{
		if ( _strncmp(nam, __environ[i], size) == 0)
		{
			break;
			j++;
		}
	}
	return (__environ[i]);
}
/***************** to tokenise path ***************************/
/**
 * toks_PATH - To tokenise string into substring
 * @envVar: Token pointer
 * @delim: Array for characters
 *
 * Return: Array tokenised substring
 */
char **toks_PATH(char *envVar, char *delim)
{
	char **tok = NULL;
	ssize_t size_substring;
	char envVar2[1024];
	int j = 0;

	stnrcpy(envVar2, envVar);
	size_substring = count_token(envVar2, delim);

	tok = malloc(sizeof(char *) * size_substring);
	if (tok == NULL)
	{
		perror("Malloc unable to allocate memory\n");
		exir(EXIT_FAILURE);
	}
	tok = toknise_line(envVar,delim, size_substring);
	while(tok[j]) 
	{
		tok[i] = tok[i + 1];
		j++;
	}
	return (tok);
}
