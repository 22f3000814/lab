#include <stdio.h>

int pd_sum(int);
void amicable(int,int);

int main()
{
    int x,y;
    printf("Enter the two positive numbers x and y : ");
    scanf("%d%d",&x,&y);
    amicable(x,y);
    return 0;
}

int pd_sum(int n){
    int s=0;
	for (int i=1;i<n;i++)
	{
		if ((n%i)==0)
		{
			s+=i;
		}
	}
    return s;
}

void amicable(int x, int y)
{
    if ((x==pd_sum(y))&&(y=pd_sum(x)))
    {
        printf("\nThey form amicable pairs.");
    }
    else
        printf("\nThey do not form amicable pairs.");
}