#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NULL 0

typedef struct{
	char name[4];
	char pass[5];
}info;

int main(int argc, char *argv[])
{
	FILE *fp;
	info z[100];
	int i;
	int t = sizeof(info);
	
	printf("%d\n ", t);
	
	if(argc != 4){
		printf("You forgot to put the name and password!");
		exit(1);
	}
	
	if((fp = fopen(argv[1], "a+")) == NULL){
		printf("Error- file not found");
		exit(1);
	}
	for(i = 0; i < 3; i++){
		scanf("%s", z[i].name);
		scanf("%s", z[i].pass);
		fwrite(&z, sizeof(info), 3, fp);
	}
	for(i = 0; i < 3; i++){
		fseek(fp, i*sizeof(info), SEEK_SET);
		if(fp == NULL){
		printf("Seek error.\n");
		exit(1);
		}
		fread(&z, t, 1, fp);
		if(strcmp(argv[2], z[i].name) == 1){
			if(strcmp(argv[3], z[i].pass) == 1)
		printf("Welcome %s\n", z[i].name);
		} 
		
	}
	fclose(fp);
	
	return 0;
}
