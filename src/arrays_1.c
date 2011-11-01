//  Submitter: Taylor Lookabaugh
//  Program: #17 - Forward/Reverse Order of arrays
//      from an external file.
//  file: arrays_1.c

#include <stdlib.h>
#include <stdio.h>

int main (void)
{
    int r[20], x, k;
    FILE *in;
    in = fopen("order.txt", "r");

    if(in == NULL)
        printf("Error opening file\n");
    else
    {
        for(k=0; k<=19; k++)
        {
            fscanf(in, "%d", &r[k]);
            x = r[k];
            printf("%d\n", r[k]);
        }

        printf("\n\n");
        for(k=19; k>=0; k--)
            printf("%d\n", r[k]);
        fclose(in);
    }

    system("PAUSE");
    return 0;
}
