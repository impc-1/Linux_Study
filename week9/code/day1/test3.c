#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	pid_t result;
	result =fork();
	int newret;
	if(result ==-1)
	{
		perror("创建子进程失败！\n");
		exit(1);
	}
	else if (result == 0)
	{
		printf("返回值为:%d,说明这是子进程\n 此进程进程号为:%d,父进程为:%d\n",result,getpid(),getppid());
		newret = system("ls -l");
	}
	else
	{
		//sleep(10);
		printf("返回值是:%d,说明是父进程！\n此进程进程号为:%d,此进程的父进程pid是:%d\n",result,getpid(),getppid());		
		newret= system("ping www.baidu.com");
	}
	
}
