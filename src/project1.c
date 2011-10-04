/*
    Submitter: Taylor Lookabaugh
    Progran: project1.c
    Linear interpolation of flight recorder data.
    using flight.txt as a data file.
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (void)
{
    double times=-99999.0, heights=-99999.0, time_input, t1=-99999.0, h1=-99999.0;
    FILE *flight;

    printf("Input a time: ");
    scanf("%lf", &time_input);

    flight = fopen("flight.txt", "r");
    if(flight == NULL)
        printf("Error opening file.");
    else
    {
        while(!feof(flight))
        {
            if(fscanf(flight, "%lf %lf", &times, &heights) != 2) return 1;
            if(time_input < 0) {printf("Invalid input.\n"); return 1;}
            if(time_input == times)
            {
                printf("the height corresponding to the time %.1lf is: %.1lf\n",
                        time_input, heights);
            }
            else if(t1<time_input && times>time_input) 
            {
                printf("the height corresponding to the time %.1lf is: %.1lf\n",
                        time_input, h1 + (heights - h1) / (times - t1) * (time_input - t1));
            }
            t1 = times;
            h1 = heights;
        }

    }
    fclose(flight);

    system("PAUSE");
    return 0;
}
