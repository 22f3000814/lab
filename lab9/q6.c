#include <stdio.h>


int digit_2(int);

int main()
{
    int n,a;
    printf("Enter the positive integer : ");
    scanf("%d",&n);
    a=digit_2(n);
    if (a==-1)
    {
    	printf("\nAll the digits are same therefore no second largest distinct digit exist.");
    	return 0;
	}
    printf("\nThe second largest distinct digit = %d",a);
    return 0;
}

int digit_2(int n)
{
    int a_1=n%10;
    int a_2=-1;
	
    while (n>0)
    {
        if (a_1<n%10)
        {
            a_2=a_1;
			a_1=n%10;
        }
        else if(a_1>n%10)
        {
        	if (a_2<n%10)
        	{
        		a_2=n%10;
			}
			
		}
        n/=10;
    }
    return a_2;
}
