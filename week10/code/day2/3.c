#include "my.h"
int g =99;
int main()
{
	int s =888;
	static int k=777;
	pid_t pid;
	pid = fork();
	int i;
	if(pid<0)
	{
		perror("fork failed!\n");
		return -1;
	}
	else if(pid == 0)
	{
		printf("child is running!\n");
		printf("now pid is :%d\n",getpid());
		printf("child :&g=%16p\n &k=%16p\n &s=%16p\n",&g,&k,&s);
		execl("./test","test", NULL);
		printf("child after execl!\n");
		_exit(12);
	}
	else
	{
		wait(&i);
		//printf("now pid is :%d\n",getpid());
		printf("parent is running! exit code =%d\n",WEXITSTATUS(i));
		
		printf("parent will finish!\n");
		return 0;
	}
}
