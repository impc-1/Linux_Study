#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
struct arg{
	int sum;
	float ave;
};


struct arg operater(int *,int);
void show(int *,int);
void urand(int *, int);
void self_sort(int *, int);
void _time(int *, int *, int);
int cmp(const void* a,const void *b);
void sys_sort(int *a, int n);
void _copy(int *a, int*b, int n);
void fp_store(string name,FILE *fp, int *a, int Length);
