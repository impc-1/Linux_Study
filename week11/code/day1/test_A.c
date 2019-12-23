#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
	int pid1,pid2,s;
	pid1 = fork();
	pid2 = fork();
	if(pid2 <0)
	{
		perror("warning!\n");
		return -1;
	}
	else if(pid1<0)
	{
		perror("warning!\n");
		return -1;
	}
	else if(pid2 ==0)
	{
		printf("%d:child exsit!\n",getpid());
		exit(100);
	}
	else if(pid1 ==0)
	{
		printf("%d:child exsit!\n",getpid());
		exit(200);
	}
	else
	{
		wait(&s);
		printf("%d: exit code\n",WEXITSTATUS(s));
		sleep(2);
		wait(&s)
		printf("%d: exit code\n",WEXITSTATUS(s));
		printf("%d :parent is running !\n",getpid());
		//while(1);
	}
	exit(0);
}
