#include <stdio.h>
#include <math.h>

int main()
{
    
    double x;
    printf("Enter your number in double format: ");
    scanf("%lf", &x);
    printf("x = %lf\n", x);
    
    double fsin;
    fsin = exp(-fabs(x))*sin(x);
    printf("Function with sin = %lf\n", fsin);
    
    double fcos;
    fcos = exp(-fabs(x))*cos(x);
    printf("Function with cos = %lf/n", fcos);

    return 0;
}
