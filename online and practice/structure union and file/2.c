#include<stdio.h>

typedef struct{
    int x;
    int y;
    int z;
}location;

int cmp(const void *a, const void *b)
{
    location p = *((location *)a);
    location q = *((location *)b);
    if(p.x < q.x)
    return -1;
    else if(p.x > q.x)
    return 1;
    else {
        if(p.y < q.y)
        return -1;
        else if(p.y > q.y)
        return 1;
        else{
            if(p.z < q.z)
            return -1;
            else if(p.z > q.z)
            return 1;
            else
            return 0;
        }
    }

}

int main()
{
    location point[200];
    int n, i;
    printf("How many points? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Point %d\n", i+1);
        printf("Enter the co-ordinate of x: ");
        scanf("%d", &point[i].x);
        printf("Enter the co-ordinate of y: ");
        scanf("%d", &point[i].y);
        printf("Enter the co-ordinate of z: ");
        scanf("%d", &point[i].z);
    }
    qsort(point, n, sizeof(location), cmp);

    printf("\nOrder of points: \n");
    for(i = 0; i < n; i++){
        printf("Point %d\n", i+1);
        printf("the co-ordinate of x: %d\n", point[i].x);
        printf("the co-ordinate of y: %d\n", point[i].y);
        printf("the co-ordinate of z: %d\n", point[i].z);
    }
}
