#include <stdio.h>
#include <unistd.h>
int all_argument(__attribute__((unused))int ac, char **av);

int main(void)
{

	pid_t my_pid;
	pid_t my_ppid;

	my_ppid = getppid();
	my_pid = getpid();
	printf ("%u \n", my_pid);
	printf("%u \n",my_ppid);

	char *arg[] = {"arg1","arg2","arg3"};
	all_argument(sizeof(arg) / sizeof(arg[0]), arg);
	return (0);
}

int all_argument(__attribute__((unused))int argc, char **argv)
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
