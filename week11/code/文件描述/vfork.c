#include "myhead.h"

int main(void)
{
	int fd_in,fd_out;
	char buf[1024];
	memset(buf, 0, 1024);
	fd_in = open("in.txt", O_RDONLY);
	if(fd_in < 0 )
	{
		perror("failed to open\n");
		return -1;
	}
	fd_out = open("out.txt", O_CREAT|O_TRUNC|O_WRONLY, S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH);
	if(fd_out < 0)
	{
		perror("failed to open\n");
		return -1;
	}
	
	if(vfork() < 0)		//vfork
	{
		printf("fork error\n");
		return -1;
	}
	while(read(fd_in, buf, 2) > 0)
	{
		printf("%d: %s",getpid(),buf);
		sprintf(buf, "%d\n",getpid());
		write(fd_out,buf,strlen(buf));
		sleep(1);
		memset(buf, 0, 1024);
	}
}
