#include<stdio.h>
#include<stdlib.h>
#define NULL 0

int main()
{
	FILE *fs1, *fs2, *fp;
	char ch;
	
	fs1 = fopen("c.txt", "r");
	fs2 = fopen("demo.txt", "r");
	
	if(fs1 == NULL || fs2 == NULL){
		perror("Error..");
		printf("Press any key to exit");
		exit(EXIT_FAILURE);
	}
	
	fp = fopen("xyz.txt", "w");
	
	if(fp == NULL)
   {
      perror("Error ");
      printf("Press any key to exit...\n");
      exit(EXIT_FAILURE);
   }
	
	while((ch = fgetc(fs1)) != EOF)
	fputc(ch, fp);
	
	while((ch = fgetc(fs2)) != EOF)
	fputc(ch, fp);
	
	fclose(fs1);
	fclose(fs2);
	fclose(fp);
	
	return 0;
}
