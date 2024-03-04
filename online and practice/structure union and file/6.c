#include<stdio.h>

union convert{
    char line[200];
    long long int number[34];
}q;
int main()
{
    int n, i;
    char c[2];

    scanf("%d", &n);

    gets(c);
    gets(q.line);

    for(i = 0; i < n/8; i++){
        printf("%lld ", q.number[i]);
    }

    return 0;
}
