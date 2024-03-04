#include<stdio.h>

int match(char *s,int n,int ind)
{
    while(*(s+ind))
    {
        if(*(s+ind)=='(')
        {
            ind=match(s,1,ind+1);
            if(ind==-1)return -1;
        }
        else if(*(s+ind)=='{')
        {
            ind=match(s,2,ind+1);
            if(ind==-1)return -1;
        }
        else if(*(s+ind)=='[')
        {
            ind=match(s,3,ind+1);
            if(ind==-1)return -1;
        }
        else if(*(s+ind)==')')
        {
            if(n==1)return ind+1;
            else
            {
                printf("Error at position %d\n",ind+1);
                return -1;
            }
        }
        else if(*(s+ind)=='}')
        {
            if(n==2)return ind+1;
            else
            {
                printf("Error at position %d\n",ind+1);
                return -1;
            }
        }
        else
        {
            if(n==3)return ind+1;
            else
            {
                printf("Error at position %d\n",ind+1);
                return -1;
            }
        }
    }
    if(n!=0)
    {
        printf("Error at position %d\n",ind+1);
        return -1;
    }
    return 1;
}
int main()
{
    char s[1000];
    while(gets(s))
    {
        if(match(s,0,0)!=-1)
            printf("Matched\n");
    }
    return 0;
}
