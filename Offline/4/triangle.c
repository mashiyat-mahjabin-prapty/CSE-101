#include<stdio.h>

void isTriangle(float a, float b, float c, int *p)
{
	if((a+b <= c) || (b+c <= a) || (c+a <= b))
	*(p+0) = 0;
	else 
	*(p+0) = 1; 
	if((a*a+b*b == c*c) || (b*b+c*c==a*a) || (c*c+a*a==b*b))
	*(p+1) = 1;
	else
	*(p+1) = 0;
}

int main()
{
	int m[2] = {0};
	float a, b, c;
	
	scanf("%f %f %f", &a, &b, &c);
	
	isTriangle(a, b, c, m);
	
	if(m[1] == 1)
	printf("A right angled triangle can be drawn\n");
	else if(m[0]==1)
	printf("A triangle can be drawn\n");
	else if(m[0] == 0)
	printf("A triangle can not be drawn\n");
	
	return 0;
}
