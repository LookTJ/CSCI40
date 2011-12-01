// to use in main programs use include "mystats.h"
// uses math.h functions, include math header file in main.


// declarations

int fill_and_count_array(double x[]);
double max(double x[], int n);
int max_int(int x[], int n);
double min(double x[], int n);
double mean(double x[], int n);
double variance(double x[], int n);
double std_dev(double x[], int n);
double median(double x[], int n);
void sort(double x[], int n);
double range(double x[], int n);
void mode(double x[], int n);

/*----------------------------------------------------------------------------*/

int fill_and_count_array(double x[])
{
    int count=0, again;

    do
    {
        printf("Enter a value for x[%d]\n", count);
        scanf("%lf", &x[count]);
        count++;
        printf("Do you want to enter another value? 1 for yes, 0 for no\n");
        scanf("%d", &again);
    }while(again==1);

    return count;
}

/*----------------------------------------------------------------------------*/

double max(double x[], int n)
{
    int k;
    double max_x;

    max_x = x[0];
    
    for(k=1; k<=n-1; k++)
        if(x[k] > max_x)
            max_x = x[k];
    return max_x;
}

/*----------------------------------------------------------------------------*/

int max_int(int x[], int n)
{
    int k;
    int max_x;

    max_x = x[0];

    for(k=1; k<=n-1; k++)
        if(x[k] > max_x)
            max_x = x[k];
    return max_x;
}

/*----------------------------------------------------------------------------*/

double min(double x[], int n)
{
    int k;
    double min_x;

    min_x = x[0];

    for(k=1; k<=n-1; k++)
        if(x[k] < min_x)
            min_x = x[k];
    return min_x;
}

/*----------------------------------------------------------------------------*/

double mean(double x[], int n)
{
    int k;
    double sum=0.0;

    for(k=0; k<=n-1; k++)
        sum += x[k];
    return sum/n;
}

/*----------------------------------------------------------------------------*/

double variance(double x[], int n)
{
    int k;
    double sum=0.0, avg;

    avg = mean(x,n);

    for(k=0; k<=n-1; k++)
        sum += (x[k] - avg)*(x[k] - avg);
    return sum/(n-1);
}

/*----------------------------------------------------------------------------*/

double std_dev(double x[], int n)
{
    return sqrt(variance(x,n));
}

/*----------------------------------------------------------------------------*/

double median(double x[], int n)
{
    double median_x;
    sort(x,n);

    if(n%2==1)
        median_x = x[(n-1)/2];
    if(n%2==0)
        median_x = (x[n/2-1] + x[n/2])/2;
    return median_x;
}

/*----------------------------------------------------------------------------*/

void sort(double x[], int n)
{
    int k, j, m;
    double hold;

    for(k=0; k<=n-1; k++)
    {
        m=k;
        for(j=k+1; j<=n-1; j++)
            if(x[j]<x[m])
                m=j;
        hold = x[m];
        x[m] = x[k];
        x[k] = hold;
    }
    return;
}

/*----------------------------------------------------------------------------*/

double range(double x[], int n)
{
    return max(x,n) - min(x,n);
}

/*----------------------------------------------------------------------------*/

void mode(double x[], int n)
{
    int k, j, mode_x=0, count=0, hold=-9999, N=0;
    int y[100];
    double t[100];
    double min_x, max_x, max_y;


    for(k=0;k<=n-1; k++)
    {
        for(j=k;  j<=n-1; j++)
        {
            if(x[j]==x[k])
            {
                count++;
           
            }
        }

        y[k]=count;

        count = 0;
    }
    max_x = max_int(y,n);

    for(k=0; k<=n-1; k++)
        if(max_x == y[k])
            if(y[k]>1)
                mode_x++;


    if(mode_x==0)
        printf("The data set has no mode.\n");
    if(mode_x==1)
    {
        printf("The data set has %d mode.\n", mode_x);
        for(k=0; k<=n-1; k++)
        {
            if(max_x == y[k])
                    printf("The value %lf appeared %d times in the data set\n", x[k], y[k]);
        }
    }
    if(mode_x>1)
    {
        printf("The data set has %d modes.\n", mode_x);
        for(k=0; k<=n-1; k++)
        {
            if(max_x == y[k])
                printf("The value %lf appeared %d times in the data set\n", x[k], y[k]);
        }
    }


    return;
}


