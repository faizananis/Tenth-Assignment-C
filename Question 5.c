#include <stdio.h>
void odd(int);
int main()
{
    int number=0;
    printf("Please Enter that how many Odd Natural Numbers you want to print: ");
    scanf("%d",&number);
    printf("\n");
    odd(number);
    return 0;
}
void odd(int n)
{
    int i=1;
    for(i=1;i<=n*2-1;i+=2)
    {
        printf("%d ",i);
    }
}
