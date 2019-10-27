#include "uhead.h"
void write_file(char *file_path)
{
	int fd;
	int i = 0;
	char word[1024] = "qeidnfkgiq" ;
	if(   (fd =open (file_path,O_RDWR|O_APPEND)) ==-1 )
	{
		printf("文件打開失敗！\n");
		return;
	}
	else
	{
		printf("文件打開成功！\n");
		printf("please input some words:\n");

		scanf("%s",word);
		
		write(fd,word,10);
	}
	close(fd);
}
