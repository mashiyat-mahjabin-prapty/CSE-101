#include<stdio.h>

int main()
{
	int year, x;
	
	scanf("%d", &year);
	
	x = (year % 4 == 0) ? (year % 100 == 0 ? (year %400 == 0 ? 1 : 2) : 1) : 2;
	
	(x == 1) ? printf("Leap Year") : printf("Not a leap year");
	
	return 0;
}
