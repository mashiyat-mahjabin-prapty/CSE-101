#include<stdio.h>

int main()
{
	int n, i, j, gcd, count = 0;
	
	scanf("%d", &n);
	
	for(i = 1; i < n; i++){
		for(j = 1; j <= n; j++){
			if(n % j == 0 && i % j == 0)
			gcd = j;
		}
	if(gcd == 1)
	count++;
	}
	printf("%d", count);
	return 0;
}
