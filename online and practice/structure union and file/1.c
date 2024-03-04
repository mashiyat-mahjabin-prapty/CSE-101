#include<stdio.h>

typedef union {
    short int x;
    char y[2];
}U;

int main()
{
    U u;

    while(EOF != scanf("%x", &u.x))
    printf("%x %x\n", u.y[0], u.y[1]);

    return 0;
}
