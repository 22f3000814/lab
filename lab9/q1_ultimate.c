#include <stdio.h>

double bin_conv(double);

int main()
{
    double b,n;
    printf("Enter the binary number : ");
    scanf("%lf",&b);
    n=bin_conv(b);
    if (n==-1)     // if the input is invalid
    return 0;
    printf("\nThe decimal equivalent is %lf\n",n);
    return 0;
}

double bin_conv(double b)
{
    int n;
    n=b;
    double f;
    f=b-n;

    int i=1;  
    int j=0;  // to calculate number of digits
    int k;
    
    // lets check if the input is a valid binary number and also calculate the number of digits
    // integer part
    do{
        i*=10;
        j+=1; 
        k=n%i;
        if ((10*k/(i)!=0)&&(10*k/(i)!=1))
        {
        printf("The input is not a binary number.\n");
        return -1;
        }
    }
    while(n%i!=n);


    int d=0;
    int q=1;

    // to add each term multiplied by 2^(n-1)
    for (int m=0;m<j;m++)
    {
        d+=(n%10)*q;
        q*=2;
        n/=10;
    }
    
     double d_f=0;
     double q_f=0.5;
    for (int i=1;i<=(13-j);j++)
    {
        f*=10;
        int j=f;
        if ((j!=0)&&(j!=1))
        {
            printf("The input is not a binary number.\n");
            return -1;
        }
        d_f+=q_f*j;
        q_f*=0.5;
        f=f-j;
    }
    if (j>13)
    {
        printf("\nWe will neglect the fractional part because of precision erro chances.\n");
        return d;
    }
    else
    {
        d_f=d+d_f;
    return d_f;
    }
}
