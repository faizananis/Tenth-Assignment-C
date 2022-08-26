#include <stdio.h>
int evenOrOdd(int);
int main()
{
    int number=0;
    int bit=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    bit=evenOrOdd(number);
    if(bit==1)
    {
        printf("\nThe given Number %d is an Even Number.\n",number);
    }
    else
    {
        printf("\nThe given Number %d is an Odd Number.\n",number);
    }
    return 0;
}
int evenOrOdd(int number)
{
    if(number%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

