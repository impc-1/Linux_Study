#include "my.h"
int main()
{
	FILE *fp;
	time_t t;
	init_daemon();
	while(1);
	{
		sleep(10);
		if((fp=fopen("6-8.log","a"))>=0)
		{
			t = time(0);
			printf("!!!!!!!");
			fprintf(fp,"守护进程正在运行,时间是: %s",asctime(localtime(&t)));
			fclose(fp);						
		}
	}

}


