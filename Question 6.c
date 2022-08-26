#include <stdio.h>
int factorial(int);
int main()
{
    int number=0;
    printf("Please Enter a Number: ");
    scanf("%d",&number);
    printf("\nThe Factorial of a Given Number %d is: %d\n",number,factorial(number));
    return 0;
}
int factorial (int n)
{
    int fact=1;
    while(n!=0)
    {
        fact=fact*n;
        n--;
    }
    return fact;
}
