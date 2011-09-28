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
    double x, y;
    int sel_f, k, num=0, above=0, th_x;
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
        fscanf(sentinel,"%i, %.2f, %.2f", &num, &x, &y);
        do
        {
        }while (k > 0);
        printf("Percentage: %f%%\n", above/num * 100.0);
        fclose(sentinel);
    }
    else if(sel_f == 2)
    {
        prenum = fopen("prenum.txt", "r");
        fscanf(prenum,"%i", &num);
        printf("Percentage: %f%%", above/num * 100.0);
        fclose(prenum);
    }




    system("PAUSE");
    return(0);
    
}
