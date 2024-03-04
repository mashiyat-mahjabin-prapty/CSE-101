#include<stdio.h>
#include<string.h>

typedef struct{
	char name[20];
	int merit;
	char dept[4];
}student;

int main()
{
	student q[50];
	char d[4];
	int n, i;
	char c;
	
	printf("How many students? ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%c", &c);
		printf("Enter the name of the student: ");
		gets(q[i].name);
		printf("Enter the merit position: ");
		scanf("%d", &q[i].merit);
		printf("Enter the department: ");
		scanf("%s", q[i].dept);
		printf("\n");
	}
	
	printf("Enter the department you want to search for: ");
	scanf("%s", d);
	
	for(i = 0; i < n; i++){
		if(strcmp(d, q[i].dept) == 0){
			printf("\n");
			printf("Name: %s\n", q[i].name);
			printf("Merit: %d\n", q[i].merit);
			printf("Department: %s\n", q[i].dept);
		}
	}
	return 0;
} 
