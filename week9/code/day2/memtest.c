#include "my.h"
#include <String.h>

static void mem_leak1(void)
{
	char *p = malloc();
}
static void mem_leak2(void)
{
	FILE *fp = fopen("test.txt",);
}
