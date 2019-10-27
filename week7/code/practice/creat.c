#include "uhead.h"

void create_file(char *file_path)
{
	int i = open(file_path,O_CREAT,0777);
	if( i== -1)
	{
		printf("文件創建失敗！");
		return;
	}
	else
	{
		printf("success!\n");	
	}
	close(i);	
}
