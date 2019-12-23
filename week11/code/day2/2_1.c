#include "my.h"
void init_daemon(void)
{
	pid_t child1,child2;
	int i;
	child1=fork();
	if(child1>0)          /*派生子进程 关闭父进程*/ 
	{
		exit(0);
	}
	else if(child1<0)
	{
		perror("创建子进程失败");
	}
	setsid();                   /*在子进程中创建新会话*/
	chdir("/tmp");                     /*改变工作目录*/
	umask(0);                    /*重设文件创建掩码*/
	for(i = 0;i<NOFILE; ++i)
	{
		close(i);	
	}
	return;
}

