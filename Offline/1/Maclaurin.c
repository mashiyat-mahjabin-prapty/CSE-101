#include<stdio.h>

int main()
{
	double x, sum=1.0, mul=1.0, p, sign;
	int j, k;
	
	scanf("%lf", &x);
	
	x = x*3.14159 / 180.0;
	//printf("%.6lf\n", x);
	
	sign = 1.0;
	for(j = 2; j < 200; j = j+2){
		sign *= (-1.0);
		mul = 1.0;
		for(k = 1; k <= j; k++){
		 	p = x / k;
		 	mul *= p;
		}		 
		sum += (sign*mul);
		 
	}
	printf("%.6lf", sum);
	return 0;
}
