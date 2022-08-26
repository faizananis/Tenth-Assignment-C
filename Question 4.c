#include <stdio.h>
void natural(int);
int main()
{
    int number=0;
    printf("Please Enter that how many Natural Numbers you want to print: ");
    scanf("%d",&number);
    natural(number);
    return 0;
}
void natural(int n)
{
    int i=1;
    printf("\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}
