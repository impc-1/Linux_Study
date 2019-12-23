#include "my.h"

static int sig_cnt[NSIG];
static int number = 8;
int sigorder[128] = {0};

#define MSG "#%d: reciever signal %d\n"

void handler(int signo)
{
	sigorder[number++]=signo;
}

int main(int argc,char *argv[])
{
	int i = 0;
	int k = 0;
	sigset_t blockmask;
	sigset_t emptymask;
	sigset_t pendmask;
	struct sigaction sa;

	#ifdef USER_SIGACTION
	sa.sa_handler = handler;
	sa.sa_mask = blockmask;
	sa.sa_flags = SA_RESTART;
	#endif
	printf("%s:PID is %d\n",argv[0],getpid());
	for(i = 1;i<NSIG; i++)
	{
		if(i==SIGKILL||i==SIGSTOP)
			continuel
		#ifdef USE_SIGACTION
			if(sigaction(i,&sa,NULL)!=0)
		#else
			if(signal(i,handler)==SIG_ERR)
		#endif
			{
				fprintf(stder,"sigaction for signo(%d) failed (%s)\n",i,strerrror(errno));
			}
	}
	int sleep_time = atoi(argv[1])
	if(sigprocmask(SIG_SETMASK,&blockmask,NULL == -1))
	{

	}
}
