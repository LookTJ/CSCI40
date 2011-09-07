/*
Submitter: Taylor Lookabaugh
file: quadratic_roots_5.cpp
Program #5
This program is designed to find the real
and complex roots of a quadratic equation.
quadratic equation: ax^2+bx+c=0
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    double a, b, c, x1, x2, d, real, imag;

    /* variable inputs defined */
    printf("Enter a constant for variable a > ");
    scanf("%lf", &a); /* a is > 0, but not = 0 */
    printf("Enter a constant for variable b > ");
    scanf("%lf", &b);
    printf("Enter a constant for variable c > ");
    scanf("%lf", &c);

    d = pow(b,2)-4*a*c;
    if(d >= 0)
    {
        printf("\n\nQuadratic equation calculation for real roots.\n");
        /* quadratic formula to calculate roots */
        x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
        x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
        
        /* output real roots calculation */
        printf("if a = %f, b = %f, c = %f\n", a, b, c);
        printf("the real roots are\n"
                "%.2f and %.2f\n", x1, x2);

    }
    else
    {
        printf("\n\nQuadratic equation calculation for complex roots.\n");
        real = -b/(2*a);
        imag = sqrt(fabs(d))/(2*a);
        if(imag == 1) /* to make the output "cleaner" */
        {
            printf("if a = %f, b = %f, c = %f\n", a, b, c);
            printf("The complex roots are\n"
                    "%.2f + i and %.2f - i \n", real, real);
        }
        else
        {
            printf("if a = %f, b = %f, c = %f\n", a, b, c);
            printf("The complex roots are\n"
                    "%.2f + %.2fi and %.2f - %.2fi \n", real, imag, real, imag);
        }
    }


    system("PAUSE");
    return(0);
}

/*
Run 1 output:
Enter a constant for variable a > 1
Enter a constant for variable b > -4
Enter a constant for variable c > 5


Quadratic equation calculation for complex roots.
if a = 1.000000, b = -4.000000, c = 5.000000
The complex roots are
2.00 + i and 2.00 - i
Press any key to continue . . .
*/

/*
Run 2 output:
Enter a constant for variable a > 1
Enter a constant for variable b > 1
Enter a constant for variable c > 1


Quadratic equation calculation for complex roots.
if a = 1.000000, b = 1.000000, c = 1.000000
The complex roots are
-0.50 + 0.87i and -0.50 - 0.87i
Press any key to continue . . .
*/

/*
Run 3 output:
Enter a constant for variable a > 3
Enter a constant for variable b > 1
Enter a constant for variable c > -4


Quadratic equation calculation for real roots.
if a = 3.000000, b = 1.000000, c = -4.000000
the real roots are
1.00 and -1.33
Press any key to continue . . .
*/
