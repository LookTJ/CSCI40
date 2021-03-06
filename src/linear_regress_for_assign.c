// Submitter: Taylor Lookabaugh
// Program: #22 - Linear Regression
//          using pointers
// file: linear_regress_for_assign.c

#include <stdio.h>
#include <stdlib.h>
#define N 100

int main (void)
{
   int n,k;
   double x[N], y[N], m, b;
   void linear_regression(double x[], double y[], int n,
                          double *slope, double *y_int);
   printf("Enter the number of (x,y) pairs in your data set: ");
   scanf("%i", &n);
   printf("\n");
   for (k=0;k<=n-1;k++)
   {
      printf("Enter x and y values for pair number %i\n"
             "(put a space and NOT a comma between the x and y values)\n",k+1);
      scanf("%lf %lf", &x[k], &y[k]);
      printf("\n");
   }
   linear_regression(x,y,n,&m,&b);
   if(b>0)
     printf("The best line fit through your data is: y = %.2fx + %.2f\n", m, b);
   else if(b==0)
     printf("The best line fit through your data is: y = %.2fx\n", m);
   else
     printf("The best line fit through your data is: y = %.2fx - %.2f\n", m,-b);
   printf("\n");
   system ("PAUSE");
   return (0);
}

/*-------------------------------------------------------------------------*/

void linear_regression(double x[], double y[], int n,
                       double *slope, double *y_int)
{
    double sum_array(double x[], int n);
    double sum_product_of_arrays(double x[], double y[], int n);
    double sum_square_array(double x[], int n);

    *slope = (sum_array(x,n)*sum_array(y,n)-n*sum_product_of_arrays(x,y,n))/
        (sum_array(x,n)*sum_array(x,n)-n*sum_square_array(x,n));
    *y_int = (sum_array(y,n)-(*slope)*sum_array(x,n))/(n);

    return;
}

/*--------------------------------------------------------------------------*/
double sum_array(double x[], int n)
{
   double total = 0.0;
   int k;
   for (k=0;k<=n-1;k++)
      total+=x[k];
   return total;
}

/*--------------------------------------------------------------------------*/
double sum_product_of_arrays(double x[], double y[], int n)
{
   double total = 0.0;
   int k;
   for (k=0;k<=n-1;k++)
      total+=x[k]*y[k];
   return total;
}

/*--------------------------------------------------------------------------*/
double sum_square_array(double x[], int n)
{
   double total = 0.0;
   int k;
   for (k=0;k<=n-1;k++)
      total+=x[k]*x[k];
   return total;
}

/*OUTPUT
  Enter the number of (x,y) pairs in your data set: 5

  Enter x and y values for pair number 1
  (put a space and NOT a comma between the x and y values)
  1.0 1.2

  Enter x and y values for pair number 2
  (put a space and NOT a comma between the x and y values)
  2.1 2.5

  Enter x and y values for pair number 3
  (put a space and NOT a comma between the x and y values)
  2.9 2.8

  Enter x and y values for pair number 4
  (put a space and NOT a comma between the x and y values)
  4.2 4.8 

  Enter x and y values for pair number 5
  (put a space and NOT a comma between the x and y values)
  5.2 5.1

  The best line fit through your data is: y = 0.97x + 0.29

  sh: PAUSE: command not found
*/

