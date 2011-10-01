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
    float value;
    double x, y;
    int sel_f, k, th_x, above=0, num=0;
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
            while(!feof(sentinel))
            {
                if(fscanf(sentinel,"%f",&value) != 1) return 1;
                if(value == -999.0) break;
                if(value>th_x)
                    above++;
                num++;
            }
            printf("num: %d\n", num);
            printf("Percentage: %d%%\n", above/num * 100.0);
            fclose(sentinel);
        }
    }
    else if(sel_f == 2)
    {
        prenum = fopen("prenum.txt", "r");
        if(prenum == NULL)
            printf("Error opening file\n\n");
        else
        {
            fscanf(prenum, "%d",&num);
            for(k=1; k<=num; k++)
            {
                if(k==44.0) break;
                if(k>th_x)
                    above++;   
            }
            printf("num: %i\n", num);
            printf("Percentage: %d%%\n", above/num * 100.0);
            fclose(prenum);
        }
    }

    system("PAUSE");
    return(0);   
}
