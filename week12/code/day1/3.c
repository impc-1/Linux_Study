#include "my.h"
int main()
{
	int pid1,pid2,pid3;
	int fd[2];
	char buf[1024];
	int r_num;
	memset(buf,0,sizeof(buf));
	if((pid1=fork())&&(pid2=fork())&&(pid3=fork())<0)
	{
		perror("fork failed.\n");
		exit(0);
	}
	else if(pid1==0)
	{
		printf("child1: %d,parent:%d\n",getpid(),getppid());
		if(pipe(fd)<0)
		{
			perror("pipe failed.\n");
			return -1;
		}
		//close(fd[1]);/////////////关写
		printf("create pipe\n");
		exit(0);
	}
	else if(pid2==0)
	{
		//sleep(2);
		printf("child2: %d,parent:%d\n",getpid(),getppid());
		close(fd[0]);
		if(write(fd[1],"1234567890",10)!=-1)
		{
			printf("parent write ok.\n");
		}
		close(fd[1]);
		exit(0);
	}
	else if(pid3==0)
	{
		//sleep(4);
		
		printf("child3: %d,parent:%d\n",getpid(),getppid());
		close(fd[1]);
		if((r_num = read(fd[0],buf,100))>0)
			printf("child read form pipe:%s,tatol=%d\n",buf,r_num);
		close(fd[0]);
		exit(0);
	}
	else
	{
		wait(NULL);
		sleep(2);
		printf("child: %d,parent:%d\n",getpid(),getppid());
		exit(0);
	}

}
