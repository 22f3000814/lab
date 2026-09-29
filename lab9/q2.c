
#include <stdio.h>

void perfect(int);

int main()
{
    int n;
    printf("Enter the positive integer : ");
    scanf("%d",&n);
    perfect(n);
    return 0;
}

void perfect(int n)
{
	int s=0;
	for (int i=1;i<n;i++)
	{
		if ((n%i)==0)
		{
			s+=i;
		}
	}
	if (s==n){
		printf("\nThe given number is a perfect number.");
	}
	else{
		printf("\nThe given number is not a perfect number.");
	}
}

