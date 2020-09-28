#include "ch2.h"
int main(){
	int ret;
	printf("%d: 1-2 is running!\n",getpid());
	ret = write(1,"Hello world!\n",13);
	sleep(100);
	exit(0);
}
