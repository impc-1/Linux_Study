#include "uhead.h"
#define UNUMBER 100
int main()
{
	int a[UNUMBER];
	int b[UNUMBER];
	struct arg t;
	urand(a, UNUMBER);
	show(a, UNUMBER);
	t = operater(a, UNUMBER);
	_copy(a,b,UNUMBER);
	printf("sum =%d, ave=%f\n",t.sum,t.ave);
	self_sort(a, UNUMBER);
	show(a, UNUMBER);
	printf("-------------------------");
	sys_sort(b, UNUMBER);
	show(b, UNUMBER);
	return 0;
}
