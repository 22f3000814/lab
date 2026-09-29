#include <stdio.h>

void roman();

int main()
{
	roman();
    return 0;
}

void roman()
{
	int c;
	int n,n_1,n_2;
	printf("Enter the integer : ");
	scanf("%d",&n);
	
	int num=0;
	int digit;
	n_1=n;
	n_2=n;
	// number of digits in n
	while (n_2>0){
		num+=1;
		n_2/=10;
	}
	
	if ((n>=1)&&(n<4000))
	{
		printf("\nThe roman equivalent is ");
		if (num==4)
		{
			int p=1000;
				digit=n_1/p;
				for (int i_1=1;i_1<=digit;i_1++)
				{
					printf("M");
				}
				n_1-=digit*p;
				num-=1;
			}
			
		if (num==3)
		{
			int p=100;
				digit=n_1/p;
				
				if (digit<=3)
				{
					for (int i_1=1;i_1<=digit;i_1++)
					{
					printf("C");
					}	
				}
				
				if (digit==4)
				{
					printf("CD");	
				}
				
				if (digit==5)
				{
					printf("D");	
				}
				
				if (digit==6)
				{
					printf("DC");	
				}
				
				if (digit==7)
				{
					printf("DCC");	
				}	
				
				if (digit==8)
				{
					printf("DCCC");	
				}
				
				if (digit==9)
				{
					printf("CM");	
				}
				
				n_1-=digit*p;
				num-=1;
			}
			
		
		
		if (num==2)
		{
			int p=10;
				digit=n_1/p;
				
				if (digit<=3)
				{
					for (int i_1=1;i_1<=digit;i_1++)
					{
					printf("X");
					}	
				}
				
				if (digit==4)
				{
					printf("XL");	
				}
				
				if (digit==5)
				{
					printf("L");	
				}
				
				if (digit==6)
				{
					printf("LX");	
				}
				
				if (digit==7)
				{
					printf("LXX");	
				}	
				
				if (digit==8)
				{
					printf("LXXX");	
				}
				
				if (digit==9)
				{
					printf("XC");	
				}
				
				n_1-=digit*p;
				num-=1;
			}
			
		if (num==1)
		{
			int p=1;
				digit=n_1/p;
				
				if (digit<=3)
				{
					for (int i_1=1;i_1<=digit;i_1++)
					{
					printf("I");
					}	
				}
				
				if (digit==4)
				{
					printf("IV");	
				}
				
				if (digit==5)
				{
					printf("V");	
				}
				
				if (digit==6)
				{
					printf("VI");	
				}
				
				if (digit==7)
				{
					printf("VII");	
				}	
				
				if (digit==8)
				{
					printf("VIII");	
				}
				
				if (digit==9)
				{
					printf("IX");	
				}
				
				n_1-=digit*p;
				num-=1;
			}	
		}
		else
		{
			printf("\nThe input is not valid.");
		}
		
		
		
	}