#include <stdio.h>

void d_to_b();

int main()
{
	d_to_b();
    return 0;
}

void d_to_b()
{
	double d_2,b,d_f;
    int r;
	printf("Enter the positive integer : ");
	scanf("%lf",&d_2);
	int d=d_2;
    int d_copy=d;

	int num=0;
	int d_1=d;
	while(d_1>0)
	{
	    num+=1;
	    d_1/=2;
	}
	
	printf("\nThe binary equivalent is\n");
    int num_0=num;
	num-=1;
	while(d!=0){
	    for (int i=1;i<=num;i++)
	    {
	        printf(" ");
	    }
		r=d%2;
		printf("%d\r",r);
		d=d/2;
		num-=1;
	}
    printf("\033[%dC",num_0);
    printf(".");

    d_f=d_2-d_copy;

    for (int i=1;i<=5;i++)
    {
        d_f*=2;
        printf("%d",(int)d_f);
        d_f-=(int)d_f;
    }
}

