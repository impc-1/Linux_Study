#include "mylib.h"
#include <stdio.h>
void main()
{
	int a[10];
	
	init(a,10);
	printf("sum: %d", sum(a, 10));
	printf("max: %d", max(a, 10));
	show(a, 10);
	
}
