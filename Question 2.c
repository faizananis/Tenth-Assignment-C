#include <stdio.h>
float simpleInterest(float,float,float);
int main()
{
    float principle=0;
    float interestRate=0;
    float time=0;
    printf("Please Enter the Principle Amount: ");
    scanf("%f",&principle);
    printf("Please Enter the Amount of Interest Rate: ");
    scanf("%f",&interestRate);
    printf("Please Enter he value of Estimated Time: ");
    scanf("%f",&time);
    printf("\nThe Total Amount of Simple Interest is: %f\n",simpleInterest(principle,interestRate,time));
    return 0;
}
float simpleInterest(float a, float b, float c)
{
    return (a*b*c)/100;
}

