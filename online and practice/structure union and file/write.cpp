#include<stdio.h>
#include<stdlib.h>
#define NULL 0

int main(int argc, char *argv[])
{
	FILE *fp;
	char ch;
	
	if(argc != 2){
		printf("You forgot to put the file name!");
		exit(1);
	}
	
	if((fp = fopen(argv[1], "w")) == NULL){
		printf("Error- cannot open file\n");
		exit(1);
	}
	do{
		ch = getchar();
		putc(ch, fp);
	}while(ch != '$');
	
	fclose(fp);
	
	return 0;	
}

