
#include <stdio.h>

double sin_x(double ,int);

int main()
{
    double x, f_x;
    int n;
    printf("Enter the angle in radians and the number of terms : ");
    scanf("%lf%d",&x,&n);
    
    f_x=sin_x(x,n);
    
    printf("\nsin(x) at %lf = %lf",x,f_x);
    return 0;
}

double sin_x(double x, int n)
{
	double t=1,f=0;
	int j=1;
	
	for (int i=1;i<=((2*n)-1);i++)
	{
		t*=x/i;
		if ((i%2)==0)
		continue;
		f+=j*t;
		j*=-1;
	}
	return f;
}