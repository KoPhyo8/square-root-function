#include <stdio.h>

double squareRoot(double a)
{
    double i=0;
    double j=a/2;

    while (j != i)
    {
        i = j;
        j = (a/i+i)/2;
        printf("%f",j);
    }
    return j;
}
int main()
{
    double a;
    printf("Enter a non-negative number: ");
    scanf("%lf",&a);

    double ans = squareRoot(a);
    printf("The square root of %.4lf:%.4lf", a, ans);
    return 0;
}

//https://www.cuemath.com/algebra/squares-and-square-roots/