#include "dylib.h"
#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
void main()
{
	int a[10];
	void *hd;
	char *error;
	void (*f0)(), (*f1)();
	int  (*f2)(), (*f3)();	
	hd = dlopen("../code/dynamic/dylib.so",	RTLD_LAZY);

	if(!hd)
	{
		fprintf(stderr, "%s\n", dlerror());
		exit(1);	
	}
		
	f0 = dlsym(hd, "init");
	if((error = dlerror())!= NULL)
	{
		fprintf(stderr, "%s\n", dlerror());
		exit(1);
	}
	

	f1 = dlsym(hd, "show");
	if((error = dlerror())!= NULL)
	{
		fprintf(stderr, "%s\n", dlerror());
		exit(1);
	}

	f2 = dlsym(hd, "max");
	if((error = dlerror())!= NULL)
	{
		fprintf(stderr, "%s\n", dlerror());
		exit(1);
	}

	f3 = dlsym(hd, "sum");
	if((error = dlerror())!= NULL)
	{
		fprintf(stderr, "%s\n", dlerror());
		exit(1);
	}
	
	f0(a,10);
	printf("sum: %d\n", f3(a, 10));
	printf("max: %d\n", f2(a, 10));
	f1(a, 10);
	if(dlclose(hd)<0){
	fprintf(stderr, "%s\n", dlerror());
	exit(1);
}
}
