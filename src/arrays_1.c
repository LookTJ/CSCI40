//  Submitter: Taylor Lookabaugh
//  Program: #17 - Forward/Reverse Order of arrays
//      from an external file.
//  file: arrays_1.c

#include <stdlib.h>
#include <stdio.h>

int main (void)
{
    int r[20], k;
    FILE *in;
    in = fopen("order.txt", "r");

    if(in == NULL)
        printf("Error opening file\n");
    else
    {
        // forward read order.
        for(k=0; k<=19; k++)
        {
            fscanf(in, "%d", &r[k]);
            printf("%d\n", r[k]);
            // stop loop at sentinel, being 9999.
            if(r[k] == 9999) break;
        }

        printf("\n\n");

        // reverse read order.
        for(k=19; k>=0; k--)
            printf("%d\n", r[k]);
        fclose(in);
    }

    system("PAUSE");
    return 0;
}
