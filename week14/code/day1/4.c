#include "my.h"
#define NUM_THREADS 4
void hello(void *t)
{
	pthread_t my_tid;
	struct info *y;
	int s=0;
	y = (struct info *)(t);
	for(int i=0;i<=y->n;i++)
	{
		s+=i;
	}
	my_tid = pthread_self();
	printf("\t Thread %d: my tid is %lx, hello world\n",(int)y->no+1,my_tid);	
	printf("\t Thread %d: sum 1 to %d is %d\n",(int)y->no+1,y->n,s);
	
}
int main()
{
	pthread_tid tid1, tid2;
	int i,rv,**ptr1,**ptr2;
	for(i=1;i<SIZE;i++)
	{
		a[i] = rand();
		b[i] = rand();
	}
	rv = pthread_create(&tid1,NULL,(void*(*)())max_fun,a);
	check_error(rv, "pthread_create : tid1");
	rv = pthread_create(&tid2,NULL,(void*(*)())max_fun,b);
	check_error(rv, "pthread_create :tid2");
	
	pthread_join(tid1,(void**)&ptr1);
	pthread_join(tid2,(void**)&ptr2);
	
	printf("thread1's max value is:%d\n",*ptr1);
	printf("thread2's max value is:%d\n",*ptr2);
	printf("max value = %d\n",(*ptr1)>(*ptr2)?(*ptr1):(*ptr2));
	
	exit(0);
}
