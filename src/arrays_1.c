//  Submitter: Taylor Lookabaugh
//  Program: #17 - Forward/Reverse Order of arrays
//      from an external file.
//  file: arrays_1.c

#include <stdlib.h>
#include <stdio.h>

int main (void)
{
    int r[20], k, count=0;
    FILE *in;
    in = fopen("order.txt", "r");

    if(in == NULL)
        printf("Error opening file: order.txt\n");
    else
    {
        // forward read order.
        for(k=0; k<=19; k++)
        {
            fscanf(in, "%d", &r[k]);
            printf("%d\n", r[k]);
            // stop loop at sentinel, being 9999.
            if(r[k] == 9999) break;
            // increment count to use in reverse for loop initialization.
            count++;
        }

        // readability.
        printf("\n\n");

        // reverse for loop.
        for(k=count; k>=0; k--)
            printf("%d\n", r[k]);
        fclose(in);
    }

    system("PAUSE");
    return 0;
}
