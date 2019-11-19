#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
	printf("pid=%d  ppid=%d\n",getpid(),getppid());	
	system("/home/gobi12315/Documents/week9/test");
	printf(" After call");
	return 0;
}
