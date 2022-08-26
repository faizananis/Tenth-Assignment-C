#include <stdio.h>
int permutation(int,int);
int main()
{
    int n=0;
    int r=0;
    int npr=0;
    printf("Please Enter Value of N for calculating the Number of Arrangements: ");
    scanf("%d",&n);
    printf("Please Enter Value of R for calculating the Number of Arrangements: ");
    scanf("%d",&r);
    if(n>=r)
    {
        npr=permutation(n,r);
        printf("\nThe Total Arrangements of the given Values of N and R is: %d\n",npr);
    }
    else
    {
        printf("\nPlease Enter Values in this Format: n >= r >= 0\n");
    }
    return 0;
}
int permutation(int n, int r)
{
    int f1=1;
    int f2=1;
    int t=0;
    t=n-r;
    while(n!=0)
    {
        f1=f1*n;
        n--;
    }
    while(t!=0)
    {
        f2=f2*t;
        t--;
    }
    return f1/f2;
}
