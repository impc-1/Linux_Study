#include "uhead.h"
void stat_file(char *file_name)
{
	struct stat buf;
	int i;	
	i = stat(file_name, &buf);
	if(i ==-1)
	{
		printf("失敗！\n");
		return;
	}
	else
	{	
		printf("權限爲: %d", buf.st_mode );
	}
}
