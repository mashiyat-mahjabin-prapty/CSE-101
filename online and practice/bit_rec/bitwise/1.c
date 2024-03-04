#include<stdio.h>
void printbinary(int n)
{
	unsigned int i;
    for(i=1<<31;i>0;i>>=1)         // mask initialized at 2^32 and each time it is divided by 2 (right shifted 1 bit)
    {
        printf("%d",!!(n&i));
    }
    printf("\n");
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)              // input ctrl+z for EOF
    {
        printbinary(n);
    }
}
