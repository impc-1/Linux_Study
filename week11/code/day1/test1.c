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
	
		printf("%d:child exsit!\n",getpid());
		exit(0);		
		
	}
	else
	{
		printf("%d :parent is running !\n",getpid());
		while(1);
	}
	exit(0);
}
