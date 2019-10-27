#include "uhead.h"
void showMenu()
{
	char buf[1024]="123456";
	char filename[100] = "a.txt";
	int i, select;
	int flag = 1;
	while(flag)
	{
		//system("clear");
		for(i=0;i<30;i++)
		{
			putchar('*');
		}
		putchar('\n');
		printf("0.退出\n");
		printf("1.创建文件\n");
		printf("2.写文件\n");
		printf("3.读文件\n");
		printf("4.查看文件权限\n");
		printf("5.修改文件权限\n");
		for(i=0;i<30;i++)
		{
			putchar('*');
		}
		putchar('\n');
		printf("Please specify your purpose:\n>");
		scanf("%d", &select);
		switch(select)
		{
			case EXIT:
			{
				flag = 0;
				break;
			}
			case CREATE_FILE:
			{
				create_file(filename);
				
				break;
			}
			case WRITE_FILE:
			{
				write_file(filename);
				
				break;
			}
			case READ_FILE:
			{
				read_file(filename);
				
				break;
			}
			case STAT_FILE:
			{
				stat_file(filename);
				break;
			}
			case CHMOD_FILE:
			{
				chmod_file(filename);
				
				break;
			}
			
			default :
			{
				printf("输入有误！\n");
			}
			//sleep(2000);
		}
		
	}
}
