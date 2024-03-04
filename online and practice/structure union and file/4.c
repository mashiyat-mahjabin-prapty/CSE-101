#include<stdio.h>

typedef struct student
{
    char name[50];
    int merit;
    char dept[4];
} info;

info std[50];

info readinput(int i);

int main()
{
    int n, i;
    char d[4];

    printf("How many students? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        std[i] = readinput(i);
    }
    printf("Which department are you searching for? ");
    scanf("%s", d);

    for(i = 0; i < n; i++)
    {
        if(strcmp(std[i].dept, d) ==0)
        {
            printf("Name: %s", std[i].name);
            printf("Merit: %d", std[i].merit);
            printf("Department: %s", std[i].dept);
        }
    }


    return 0;

}

info readinput(int i)
{
    info q;
    printf("Name of the student: ");
    scanf("%s", q.name);
    printf("Merit position: ");
    scanf("%d", &q.merit);
    printf("Department of the student: ");
    scanf("%s", q.dept);

    return(q);
}
