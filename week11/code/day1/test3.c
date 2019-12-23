#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
	int pid,s;
	if((pid=fork())<0)
	{
		perror("warning!");
		return -1;
	}
	else if(pid==0)
	{
		printf("%d: child is running now!\n",getpid());	
		
		printf("%d:child exit now!\n",getpid());
		while(1);
		exit(100);		
		
	}
	else
	{
		printf("%d:parent is waiting for the zombie now\n",getpid());
		while((pid=wait(&s))!=-1)
		{
			printf("%d : parent is exiting now\n",getpid());
			if(WIFEXITED(s))
			{
				printf("child %d is exiting normally.exit code = %d\n",getpid(),WEXITSTATUS(s));
			}
			else if(WIFSIGNALED(s))
			{
				printf("child %d is exit by signal.signal no =%d\n",pid,WTERMSIG(s));
			}
			else
			{
				printf("Not know!\n");
			}
		}
		
	}
	exit(0);
}
