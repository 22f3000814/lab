#include <stdio.h>


int digit_2(int);

int main()
{
    int n,a;
    printf("Enter the positive integer : ");
    scanf("%d",&n);
    a=digit_2(n);
    printf("\nThe second largest distinct digit = %d",a);
    return 0;
}

int digit_2(int n)
{
    int a_1=n%10;
    int a_2=n%10;

    while (n/10>0)
    {
        if (a_2<n%10)
        {
            if (a_1<n%10)
            {
                a_1=n%10;
            }
            else
            {
                a_2=n%10;
            }
        }
        n/=10;
    }

    return a_2;
}