#include <stdio.h>
int checkDigit(int,int);
int main()
{
    int digit=0;
    int number=0;
    int bit=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    printf("Please Enter a Single digit to check it is available in a Number or not: ");
    scanf("%d",&digit);
    bit=checkDigit(number,digit);
    if(bit==1)
    {
        printf("\nYour Given Number %d contains a digit %d.\n",number,digit);
    }
    else
    {
        printf("\nYour Given Number %d not contains a digit %d.\n",number,digit);
    }
    return 0;
}
int checkDigit(int n,int d)
{
    int m=0;
    do
    {
        m=n%10;
        n=n/10;
        if(m==d)
        {
            return 1;
        }
    }
    while(n!=0);
    return 0;
}

