#include<stdio.h>
#define NULL 0

int main()
{
	FILE *fpt;
	char c;
	 
	if((fpt = fopen("demo.txt ", "r")) == NULL)
	printf("\nERROR - Cannot open the designated file\n");
	else
	do
	putchar(c = getc(fpt));
	while(c != '\n');
	
	fclose(fpt);
	return 0;
}
