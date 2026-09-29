#include <stdio.h>

int bin_conv(int);

int main()
{
    int b,n;
    printf("Enter the binary number : ");
    scanf("%d",&b);
    n=bin_conv(b);
    if (n==-1)     // if the input is invalid
    return 0;
    printf("\nThe decimal equivalent is %d",n);
    return 0;
}

int bin_conv(int n)
{
    int i=1;  
    int j=0;  // to calculate number of digits
    int k;
    
    // lets check if the input is a valid binary number and also calculate the number of digits
    do{
        i*=10;
        j+=1; 
        k=n%i;
        if ((10*k/(i)!=0)&&(10*k/(i)!=1))
        {
        printf("The input is not a binary number.");
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
    
    return d;
    
}
