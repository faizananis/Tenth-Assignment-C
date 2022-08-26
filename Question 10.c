#include <stdio.h>
void factors(int);
int main()
{
    int number=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    printf("\nThe Factors of a Given Number %d are:\n\n",number);
    factors(number);
    return 0;
}
void factors(int n)
{
    int fact=1;
    int i=2;
    while(n!=1)
    {
        if(n%i==0)
        {
            n=n/i;
            printf("%d ",i);
        }
        else
        {
            i++;
        }
    }
    printf("\n");
}
