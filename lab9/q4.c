
#include <stdio.h>

double power(double, int);

int main()
{
    int n;
    double a,f;
    printf("Enter a and n : ");
    scanf("%lf%d",&a,&n);
    f=power(a,n);
    printf("\nThe a^n = %lf",f);
    return 0;
}

double power(double a, int n)
{
	double s=1;
	for (int i=1;i<=n;i++)
	{
		s*=a;
	}
	return s;
}
