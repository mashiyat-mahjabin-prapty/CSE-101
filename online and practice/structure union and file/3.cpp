#include<stdio.h>

typedef struct{
	double mean;
	double mode[50] = {0};
	double median[2];
	double cot;
}math;

int cmp(const void *a, const void *b)
{
	double ta = *((double *)a);
	double tb = *((double *)b);
	
	return ta-tb;
}

math mathfun(double *p, int n)
{
	int i, count, max = 0;
	math q;
	double sum=0.0;
	
	for(i = 0; i < n; i++)
		sum += p[i];
	q.mean = sum / n;
	
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
		if(count > max)
		max = count;
	}
	q.cot = max;
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
	
	printf("Mean: %lf", h.mean);
	if(n%2)
	printf("Median: %lf", h.median[0]);
	else
	printf("Median: %lf and %lf", h.median[0], h.median[1]);
	
	for(i = 0; i < n; i++){
		if(h.mode[i] == h.cot)
		printf("%lf ", arr[i]);
	}
	return 0;
}
