#include<stdio.h>
#define NULL 0

int main()
{
	FILE *fpt;
	char c;
	int count = 0;
	
	if((fpt = fopen("demo.txt", "r")) == NULL)
	printf("Error- file not found");
	
	else
	do{
		c = getc(fpt);
		if((c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u') || (c=='A') || (c=='E') || (c=='I') || (c=='O') || (c=='U'))
		count++;
	} 
	while(c != '\n');
	
	printf("%d", count);
	
	fclose(fpt);
	
	return 0;
}
