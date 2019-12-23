#include "my.h"

void sigtoutime(int dunno)
{
	switch(dunno)
	{
		case 1:
			printf("get a signai SIGHUP\n");
			break;
		case 2:
			printf("get a signai SIGINT\n");
			break;
		case 3:
			printf("get a signai SIGQUIT\n");
			break;
	}
}
int main()
{
	printf("process id is %d",getpid());
	signal(SIGHUP,sigtoutime);
	signal(SIGINT,sigtoutime);
	signal(SIGQUIT,sigtoutime);	
	while(1);

}
