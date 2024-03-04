#include<stdio.h>

int isprime(int n)
{
	int i, flag = 1;
	
	for(i = 2; i*i <= n; i++){
		if(n % i == 0){
			flag = 0;
			break;
		}
	}
	return flag;
}

int main()
{
	int n, j, k, p=0;
	
	scanf("%d", &n);
	
	p = isprime(n);
	
	if(p)
	printf("%d\n", n);
	else{
		for(j = n/2; j >= 2; j--){
			if(n % j == 0){
			k = isprime(j);	
			}
		if(k)
		break;	
		}
		printf("%d\n", j);
	}
	
	return 0;
}
