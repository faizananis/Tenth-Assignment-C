#include <stdio.h>
#include <math.h>
float circleArea(float);
int main()
{
    float radius=0;
    printf("Please Enter a Radius of a Circle: ");
    scanf("%f",&radius);
    printf("\nThe Area of the given Circle is: %f\n",circleArea(radius));
    return 0;
}
float circleArea(float rad)
{
    return M_PI*rad*rad;
}
