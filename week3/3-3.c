#include "ch02.h"

int main(){
	FILE *fp;
	fp = fopen("./test1.txt","w");
	printf("file fd = %d\n",fp->_fileno);
	fclose(fp);
	return 0;
}
