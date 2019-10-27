#include "uhead.h"

void chmod_file(char *file_name)
{
	mode_t mode;
	printf("please input:\n");
	scanf("%d",&mode);	
	int i = chmod(file_name, mode);
	if(i == -1)
	{
		printf("失敗！\n");
		exit(0);
	}
	else
	{
		printf("success!\n");
	}
	
}
