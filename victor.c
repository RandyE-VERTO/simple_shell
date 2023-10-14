#include <stdio.h>
#include <unistd.h>
int main(void)
{

	pid_t my_pid;
	pid_t my_ppid;

	my_ppid = getppid();
	my_pid = getpid();
	printf ("%u \n", my_pid);
	printf("%u \n",my_ppid);

	printf(all_argument(__attribute__(unused)int ac, char **av));
	return (0);
}
int all_argument(__attribute__((unused))int ac, char **av)
{
	int i;
	
	for (i = 0;av[i] != NULL; i++)
	{
		printf("%s\n", av[i]);
	}
	return (0);
}
