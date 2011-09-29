/*
Submitter: Taylor Lookabaugh
Program #12
Purpose: read from external file and determine the
        percentage of data values greater than the threshold.
*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    double x, y, above=0.0, num=0.0;
    int sel_f, k, th_x;
    FILE *sentinel;
    FILE *prenum;

    do
    {
        printf("Enter an integer to select a file.\n");
        printf("\n1: sentinel.txt\n");
        printf("2: prenum.txt\n");
        printf("> ");
        scanf("%i", &sel_f);
        if(sel_f != 1 && sel_f != 2)
            printf("Invalid input, please try again.\n");
    } while (sel_f != 1 && sel_f != 2);

    printf("Enter a threshold value: ");
    scanf("%i", &th_x);

    if(sel_f == 1)
    {
        sentinel = fopen("sentinel.txt", "r");
        if (sentinel == NULL)
            printf("Error opening file\n\n");
        else
        {
            fscanf(sentinel,"%lf", &num);
            while (th_x > 0)
            {
                above++;
                th_x;
                num++;
            }
            printf("num: %f\n",num);
            printf("Percentage: %f%%\n", above/num * 100.0);
            fclose(sentinel);
        }
    }
    else if(sel_f == 2)
    {
        prenum = fopen("prenum.txt", "r");
        if(prenum == NULL)
            printf("Error opening file");
        else
        {
            fscanf(prenum,"%lf", &num);
            printf("num: %f\n",num);
            for (k=th_x; k<num; k++)
            {
                above++;            
            }
            printf("Percentage: %f%%\n", above/num * 100.0);
            fclose(prenum);
        }
    }

    system("PAUSE");
    return(0);   
}
