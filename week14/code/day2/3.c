//栈溢出

#include "my.h"

void *fun(void *n)
{
	int a;
	a=(int)n;
	printf("receive value %d\n",a);
	pthread_exit((void *)a);
	return (void *)a;
}
int main()
{
	pthread_t tid[4];
	int ret[4],i,v[4];
	for(i=0;i<4;i++)
	{
		ret[i] = pthread_create(&tid[i],NULL,fun,(void *)i);
		if(ret[i]!=0)
		{
			perror("failed to create \n");
			return -2;
		}
		pthread_join(tid[i],(void *)v[i]);
	}
	return 0;

}
