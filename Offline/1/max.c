#include<stdio.h>

int main()
{
	char x;
	int c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0, c0=0;
	
	while(x != '\n'){
		scanf("%c", &x);
		
		if(x == '1')
		c1++;
		else if(x == '2')
		c2++;
		else if(x == '3')
		c3++;
		else if(x == '4')
		c4++;
		else if(x == '5')
		c5++;
		else if(x == '6')
		c6++;
		else if(x == '7')
		c7++;
		else if(x == '8')
		c8++;
		else if(x == '9')
		c9++;
		else 
		c0++;
	}
	if(c9 > 0)
	printf("%d", c9);
	else if(c8 > 0)
	printf("%d", c8);
	else if(c7 > 0)
	printf("%d", c7);
	else if(c6 > 0)
	printf("%d", c6);
	else if(c5 > 0)
	printf("%d", c5);
	else if(c4 > 0)
	printf("%d", c4);
	else if(c3 > 0)
	printf("%d", c3);
	else if(c2 > 0)
	printf("%d", c2);
	else if(c1 > 0)
	printf("%d", c1);
	else
	printf("%d", c0);
	
	return 0; 
}
