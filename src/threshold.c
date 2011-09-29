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
        if (sentinel == NULL)
            printf("Error opening file\n\n");
        else
        {
            fscanf(sentinel,"%i", &num);
            while (!feof(sentinel))
            {
                if (fscanf(sentinel,"%i",&num) != 3)
                    break;
                if(num != -999) 
                    break;
                if(th_x > above)
                    above++;
                num++;
            }


            printf("Percentage: %i%%\n", above/num * 100.0);
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
            fscanf(prenum,"%i", &num);
            for (k=th_x; k<=num; k++)
                above++;            
            printf("Percentage: %i%%\n", above/num * 100.0);
            fclose(prenum);
        }
    }




    system("PAUSE");
    return(0);
    
}
