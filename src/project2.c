#include <stdio.h>
#include <stdlib.h>
#define N 100
int main (void)
{
        double x[N];
        void mode (double x[],int n);
        int n;
        FILE *file1, *file2, *file3;

        file1=fopen("input1.txt", "r");
        n=0;
        fscanf(file1,"%lf",&x[n]);
        while (x[n]!=-9999)
        {
            n++;
            fscanf(file1,"%lf",&x[n]);
        }
        fclose(file1);
        mode(x,n);

        file2=fopen("input2.txt", "r");
        n=0;
        fscanf(file2,"%lf",&x[n]);
        while (x[n]!=-9999)
        {
            n++;
            fscanf(file2,"%lf",&x[n]);
        }
        fclose(file2);
        mode(x,n);

        
        file3=fopen("input3.txt", "r");
        n=0;
        fscanf(file3,"%lf",&x[n]);
        while (x[n]!=-9999)
        {
            n++;
            fscanf(file3,"%lf",&x[n]);
        }
        fclose(file3);
        mode(x,n);

        system("PAUSE");
        return (0);
}

/*----------------------------------------------------------------------------*/

void mode(double x[], int n)
{
    int max_int(int x[], int n);
    int k, j, mode_x=0, count=0;
    int y[100];
    int max_y;

    // Glossary:
    // k - used in outer for loop and standard for loop.
    // j - used in inner for loop to see if x[k] = x[j]
    // mode_x - counts how many modes there are in a data set.
    // count - counter for how many times the value appeared throughout the
    // scan of the x array.
    // max_y - to get max value of the counter.
    // y[100] - counter array.
    // max_int - function prototype to obtain max value of an integer array.


    // go through the data set to count the number of times each values
    // appeared.
    for(k=0;k<=n-1; k++)
    {
        for(j=k;  j<=n-1; j++)
        {
            if(x[j]==x[k])
            {
                count++;
           
            }
        }

        y[k]=count; // put the count in the counting y array.

        count = 0; // reset the count
    }
    // get the max count in the data set
    max_y = max_int(y,n);

    // increment mode_x if the max equals the counter.
    for(k=0; k<=n-1; k++)
        if(max_y == y[k])
            if(y[k]>1)
                mode_x++;


    // print out the mode(s), and the corresponding value counted in the data
    // set.
    if(mode_x==0)
        printf("The data set has no mode.\n");
    if(mode_x>=1)
    {
        printf("The data set has %d mode.\n", mode_x);
        for(k=0; k<=n-1; k++)
        {
            if(max_y == y[k])
                    printf("The value %.1lf appeared %d times in the data set\n", x[k], y[k]);
        }
    }


    return;
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


