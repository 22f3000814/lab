#include <stdio.h>

void d_to_b();

int main()
{
	d_to_b();
    return 0;
}

void d_to_b()
{
	int d,b,r;
	printf("Enter the positive integer : ");
	scanf("%d",&d);
	
	int num=0;
	int d_1=d;
	while(d_1>0)
	{
	    num+=1;
	    d_1/=2;
	}
	
	printf("\nThe binary equivalent is\n");
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
}

