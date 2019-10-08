#include "uhead.h"
void fp_store(string name,FILE *fp, int *a, int Length)
{
	int i;
	if((fp= fopen(name,"w+")) == NULL)
	{
		printf("File cannot be opened/n");
		exit();
	}
	else
	{
		for(i =0;i <Length; i++)
		{
			fprintf(fp,"%-8d", a[i]);
			fprintf(fp,"/n");		
		}
	}
}
