#include "ch02.h"
int main(int argc,char *argv[]){
	FILE *fp;
	if((fp=fopen("./test1.txt","w"))==NULL)
		perror("open failed!\n");
	int i;
	for(i=1;i<argc;i++){
	    fprintf(fp,"%s",argv[i]);	
	    printf("[%d] : \t %s \t %ldbyte\n",i,argv[i],strlen(argv[i]));
	}
	fclose(fp);
	return 0;
}
