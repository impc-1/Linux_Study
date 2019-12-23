#include "my.h"
void main()
{
	int pid1,pid2,s1,s2;
	int i;
	int data;
	char buf[] = {1,2,3,4,5,6,7,8,9};
	pid1 = fork();
	pid2 = fork();
	if((pid1<0)||(pid2<0))
	{
		perror("warning !Failed to create a process");
		exit(0);	
	}
	else if(pid1 == 0)
	{
		FILE *fp;
		if((fp=fopen("1.txt","w+"))<0)
		{
			printf("Failed to open/create");
			exit(0);	
		}
		fprintf(fp,"%d",getpid());
		for(i =0;i<9;i++)
		{
			fprintf(fp,"%d",buf[i]);
		}
		fclose(fp);	
		exit(100);
	}
	else if(pid2 ==0)
	{
		FILE *fp;
		if((fp=fopen("1.txt","w+"))<0)
		{
			printf("Failed to open/create");
			exit(0);	
		}
		fprintf(fp,"%d",getpid());
		for(i =0;i<9;i++)
		{
			fprintf(fp,"%d",buf[i]);
		}
		fclose(fp);	
		exit(120);
		
	}
	else
	{
		FILE *fp;
		wait(&s1);
		wait(&s2);
		
		if((fp=fopen("1.txt","r"))<0)
		{
			printf("Failed to open/create");
			exit(0);	
		}
		while(!feof(fp))
		{
			fscanf(fp,"%d",&data);
			printf("%4d",data);
		}
		printf("\n");
		fclose(fp);
		return;
	}

}
