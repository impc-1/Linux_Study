#include "uhead.h"
void read_file(char *file_path)
{
	int fd;
	char word[1024];
	if((fd= open(file_path,O_RDWR|O_CREAT)) ==-1)
	{
		printf("文件打開失敗！\n");
		return;
	}
	else
	{
		printf("文件打開成功！\n");
		read(fd,word,1024);
		printf("%s\n", word);
	}
	close(fd);
}
