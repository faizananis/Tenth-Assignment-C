#include <stdio.h>
int combinations(int,int);
int main()
{
    int n=0;
    int r=0;
    int ncr=0;
    printf("Please Enter Value of N for Calculating Number of Combinations: ");
    scanf("%d",&n);
    printf("Please Enter Value of R for Calculating Number of Combinations: ");
    scanf("%d",&r);
    if(n>=r)
    {
        ncr=combinations(n,r);
        printf("\nThe Number of Combinations from the given Values of N and R are: %d\n",ncr);
    }
    else
    {
        printf("\nPlease enter Values in this Format: n >= r >= 0.\n");
    }
    return 0;
}
int combinations(int n, int r)
{
    int t=0;
    int f1=1;
    int f2=1;
    int f3=1;
    t=n-r;
    while(t!=0)
    {
        f1=f1*t;
        t--;
    }
    while(n!=0)
    {
        f2=f2*n;
        n--;
    }
    while(r!=0)
    {
        f3=f3*r;
        r--;
    }
    return f2/f1/f3;
}
