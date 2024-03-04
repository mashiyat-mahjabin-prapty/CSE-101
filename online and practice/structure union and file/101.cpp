#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NULL 0

int main(int argc, char *argv[])
{
	char ch[100];
	int flag = 0;
	FILE *fp;
	fp = fopen("info.txt", "r");
	
	if(argc != 3){
		printf("Enter username and password: \n");
		exit(1);
	}
	
	while(!feof(fp)){
		fscanf(fp, "%s", ch);
		if(!strcmp(ch, argv[1])){
			flag = 1;
			fscanf(fp, "%s", ch);
			if(!strcmp(ch, argv[2])){
				printf("You have successfully logged in\n");
				break;
			}
			else{
				printf("Incorrect password\n");
				break;
			}
		}
	}
	if(flag == 0){
		printf("Incorrect username!\n");
	}
	
	fclose(fp);
	
	return 0;
}
