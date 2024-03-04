#include<stdio.h>

typedef struct{
	double mean;
	int mode[50];
	double median[2];
	int cot;
}math;

int cmp(const void *a, const void *b)
{
	double ta = *((double *)a);
	double tb = *((double *)b);
	
	return ta-tb;
}

math mathfun(double *p, int n)
{
	int i, count, j;
	math q;
	q.cot = 0;
	int sum=0;
	
	for(i = 0; i < n; i++)
		sum += p[i];
	q.mean = (double)sum / n;
	
	if(n%2 == 0){
		q.median[0] = p[(n/2)-1];
		q.median[1] = p[n/2];
	}
	else
	q.median[0] = p[n/2];
	
	for(i = 0; i < n; i++){
		count = 0;
		for(j = i+1; p[i] == p[j]; j++){
			count++;
		}
		q.mode[i] = count;
		if(count > q.cot)
		q.cot = count;
	}
	return q;
} 

int main()
{
	math h;
	double arr[50];
	int n, i;
	
	printf("How many numbers? ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	scanf("%lf", &arr[i]);
	
	qsort(arr, n, sizeof(double), cmp);
	
	h = mathfun(arr, n);
	
	printf("Mean: %.3lf\n", h.mean);
	if(n%2)
	printf("Median: %.3lf\n", h.median[0]);
	else
	printf("Median: %.3lf %.3lf\n", h.median[0], h.median[1]);
	
	printf("Mode: ");
	for(i = 0; i < n; i++){
		if(h.mode[i] == h.cot)
		printf("%.3lf ", arr[i]);
	}
	return 0;
}
