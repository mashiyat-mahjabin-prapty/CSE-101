#include<stdio.h>

typedef struct{
	double x;
	double y;
	double z;
}point;

int cmp(const void *a, const void *b)
{
	point p = *((point *)a);
	point q = *((point *)b);
	
	if(p.x < q.x)
		return -1;
	else if(p.x > q.x)
		return 1;
	else{
		if(p.y < q.y)
			return -1;
		else if(p.y > q.y)
			return 1;
		else{
			if(p.z < q.z)
				return -1;
			else if(p.z > q.z)
				return 1;
			else
				return 0;
		}
	}
}

int main()
{
	point cool[50];
	int n, i;
	
	printf("How many points do you want to compare? ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("Value of x co-ordinate: ");
		scanf("%lf", &cool[i].x);
		printf("Value of y co-ordinate: ");
		scanf("%lf", &cool[i].y);
		printf("Value of z co-ordinate: ");
		scanf("%lf", &cool[i].z);
		printf("\n");
	}
	qsort(cool, n, sizeof(point), cmp);
	
	printf("Rearranged points:\n");
	for(i = 0; i < n; i++){
		printf("Value of x co-ordinate: %lf\n", cool[i].x);
		printf("Value of y co-ordinate: %lf\n", cool[i].y);
		printf("Value of z co-ordinate: %lf\n", cool[i].z);
		printf("\n");
	}
	return 0;
}
