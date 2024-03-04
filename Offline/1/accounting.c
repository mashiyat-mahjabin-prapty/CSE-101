#include<stdio.h>

int main()
{
	float x, sum;
	
	scanf("%f", &x);
	
	if(x <= 100)
	sum += (x*0.5);
	else{
		sum += (100*0.5);
		x -= 100;
		if(x <= 100)
		sum += (x*0.8);
		else{
			sum += (100*0.8);
			x -= 100;
			sum += (x*1.2);
		}
	}
	printf("%.2f", sum);
	
	return 0;
}
