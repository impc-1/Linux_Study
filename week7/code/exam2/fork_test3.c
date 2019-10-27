#include <stdio.h>
#include <stdlib.h>
#define SIZE 512
int main()
{
	char buf[512];
	if(setvbuf(stdin,buf, _IONBF,SIZE)!=0)
	{
		perror("將標準輸入 stdin 的輸入 設置 爲無緩沖類型爲無緩沖\n")；
		return 1;
	}
	printf("將標準輸入stdin的輸入設置爲無緩衝成功！\n");
	printf("stdin類型爲:");
	if(stdin-> _flags & _IO_UNBUFFERED)
	{
		printf("無緩衝\n");	
	}	
	else if(stdin -> _flags & _IO_LINE_BUF)
	{
		printf("行緩衝\n");
	}
	else
	{
		printf("全緩衝\n");
	}
	printf("緩衝區大小爲 %ld\n", stdin-> _IO_buf_end - stdin->_IO_buf_base);
	printf("文件描述符爲 %d\n", fileno(stdin));
	if(setvbuf(stdin,buf, _IOFBF,SIZE)!=0)
	{
		perror("將標準輸入 stdin 的輸入 設置 全緩沖失敗\n")；
		return 2;
	}
	printf("將標準輸入stdin的輸入設置爲無緩衝成功！\n");
	printf("stdin類型爲:");
	if(stdin-> _flags & _IO_UNBUFFERED)
	{
		printf("無緩衝\n");	
	}	
	else if(stdin -> _flags & _IO_LINE_BUF)
	{
		printf("行緩衝\n");
	}
	else
	{
		printf("全緩衝\n");
	}
	printf("緩衝區大小爲 %ld\n", stdin-> _IO_buf_end - stdin->_IO_buf_base);
	printf("文件描述符爲 %d\n", fileno(stdin));
}
