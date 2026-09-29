#include <stdio.h>

void d_to_b(int);

int main()
{
    int d;
	printf("Enter the positive integer : ");
	scanf("%d",&d);
	printf("\nThe binary equivalent is \n");
    d_to_b(d);
    return 0;
}

void d_to_b(int d)
{
	if (d==0)
    return;
    d_to_b(d/2);
    printf("%d",d%2);
}
