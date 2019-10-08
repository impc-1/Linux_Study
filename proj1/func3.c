#include "uhead.h"

void _time(int* a, int* b, int n)
{
	struct timeval tv1, tv2;
	struct timezone tz;

}
void self_sort(int *a, int n)
{
	struct timeval tv1, tv2;
	struct timezone tz;
	gettimeofday(&tv1,&tz);
	int i, k, j;
	int temp;
	for(i =0; i<n; i++)
	{
		k= i;
		for(j=i+1; j<n; j++)		
		if(a[j]<a[k]) k=j;
		if(k!=i)
		{
			temp = a[i];
			a[i] = a[k];
			a[k] = temp;
		}
	}
	gettimeofday(&tv2, &tz);
	printf("----------------時間差 %ld-us-----------",tv2.tv_usec - tv1.tv_usec);
}
void sys_sort(int *a, int n)
{
	struct timeval tv1, tv2;
	struct timezone tz;
	gettimeofday(&tv1,&tz);	
	qsort(a,n,sizeof(int),cmp);
	gettimeofday(&tv2, &tz);
	printf("----------------時間差 %ld-us-----------",tv2.tv_usec - tv1.tv_usec);
}
int cmp(const void* a,const void *b)
{
	return *(int *)a - *(int *)b;
}
