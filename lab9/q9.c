#include <stdio.h>

void next_day(int,int,int);

int main()
{
    int d,m,y;
    int valid;

    printf("Enter the day : ");
    scanf("%d",&d);
    printf("\nEnter the month : ");
    scanf("%d",&m);
    printf("\nEnter the year : ");
    scanf("%d",&y);

    next_day(d,m,y);

    return 0;
}

void next_day(int d,int m,int y)
{
    int max_days;

    // checking if the date is valid
    if (m==2)
    {
        if(((y%400)==0)||(((y%100)!=0)&&((y%4)==0)))
        {
            max_days=29;
        }
        else
        {
            max_days=28;
        }
    }
    else if ((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))
    {
        max_days=31;
    }
    else
    {
        max_days=30;
    }
    if ((d<=max_days)&&(1<=d)&&(1<=m)&&(m<13)&&(y>0))
    {
        d+=1;
        if (d>max_days)
        {
            d=1;
            m+=1;
            if (m>12)
            {
                m=1;
                y+=1;
            }
        }
        printf("\nThe next date is %d/%d/%d\n",d,m,y);
    
    }
    else
        printf("\nThe date is invalid.\n");
}
