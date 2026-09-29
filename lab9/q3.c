#include <stdio.h>


void minmax(int*, int*, int*,int*,int*);

int main()
{
    int a,b,c, max,min;
    printf("Enter the integers a, b and c : ");
    scanf("%d%d%d",&a,&b,&c);
    minmax(&a,&b,&c,&max,&min);
    printf("\nMaximum = %d \nMinimum = %d",max,min);
    return 0;
}

void minmax(int* a, int* b, int* c, int *max, int* min)
{
    *max=*a;
    *min=*a;
    
    if (*b>*a)
    {
        if (*c>*b)
            *max=*c;
        else
        {
            if (*c<*a)
                *min=*c;
            *max=*b;
        }    
    }
    else
    {
        *min=*b;
        if (*c>*b)
        {
            if (*c>*a)
            *max=*c;
        }
        else
        {
            *max=*a;
            *min=*c;
        }
    }
}