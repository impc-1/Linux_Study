#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
	char *argv[] = {"/home/gobi12315/Documents/week9/test2",NULL};
	printf("pird =%d\n",getpid());
	if(execve("/home/gobi12315/Documents/week9/test2",argv,NULL)<0)
		perror("用execve 创建进程失败");
	return 1;

}
