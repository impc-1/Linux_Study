#include "uhead.h"
void show(int *a, int n)
{
	int i;
	for(int i =0;i<n; i++)
	{
		printf("_[%d]=%d\n",i, a[i]);	
	}
}
void _copy(int *a, int*b, int n)
{
	int i;
	for(i = 0; i<n; i++)
		b[i]=a[i];
}
void urand(int *a, int n)
{
	int i;
	srand((int)time(0));//time函數的頭文件是？
	for(i=0;i<n;i++)
	{
		a[i] = 1+ (int)(1000.0*rand()/(RAND_MAX +1.0));
	}

}
