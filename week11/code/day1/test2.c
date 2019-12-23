#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
	int pid;
	if((pid=fork())<0)
	{
		perror("warning!");
		return -1;
	}
	else if(pid==0)
	{
		printf("%d: child is running now!\n",getpid());	
		while(1);
		printf("%d:child exit now!\n",getpid());
		exit(0);		
		
	}
	else
	{
		printf("%d :parent is running !\n",getpid());
		while(1);
		printf("%d :parent exit now!\n",getpid());
	}
	exit(0);
}
