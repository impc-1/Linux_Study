#include "my.h"
void pr_exit(int status,pid_t pid)
{
	int sig;
	if(WIFEXITED(status))
		printf("process %d normal termination, exit status = %d\n",pid,WEXITSTATUS(status));
	else if(WIFSIGNAL())
	{
		sig = WTERMSIG(status);
		printf("process  %d normal termination, signal number = %d %s:\n",pid,sig,
		#ifdef WCOREDUMP(status);
			WCOREDUMP(STATUS)?"(core file generated)":"");
		#else
			"");
		#else if
			psignal(sig,"");
	}
	else if(WIFSTOPPED(status)){
		sig = WSTOPSIG(status);
		printf("process %d stopped,singal number = %d\n",pid,sig);
		psingal(sig,"");
	}
)
	}
}
