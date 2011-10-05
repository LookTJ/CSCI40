/*
    Submitter: Taylor Lookabaugh
    Progran: project1.c
    Linear interpolation of flight recorder data.
    using flight.txt as a data file.
*/

#include <stdlib.h>
#include <stdio.h>

int main (void)
{
    /* intialize values at bogus values to make sure loop starts at 0.0
     * times - current time value
     * heights - current height value
     * time_input - user to input time
     * t1 - current value assigned to this variable to assign previous value.
     * h1 - same as t1
     * file pointer for flight.txt data file */
    double times=-99999.0, heights=-99999.0, time_input, t1=-99999.0, h1=-99999.0;
    FILE *flight;

    do
    {
        /* asks user to input time. */
        printf("Input a time of 0 or greater: ");
        scanf("%lf", &time_input);
        /* return error if input < 0 */
        if(time_input < 0) {printf("Invalid input.\n");}
    }while(time_input < 0);


    flight = fopen("flight.txt", "r");
    /* if there's nothing to read, print error.*/
    if(flight == NULL)
        printf("Error opening file.");
    else 
    {
        while(!feof(flight))
        {
            /* Test file for 2 values, if not 2, return error(nonzero) */
            if(fscanf(flight, "%lf %lf", &times, &heights) != 2) break;
            /* print values from data file regarding time and height. */
            if(time_input == times)
            {
                printf("\n\nThe height corresponding to the time %.1lf is: %.1lf\n",
                        time_input, heights);
            }
            /* print values if time isn't in data file, but in between previous
             * and current time values.
             * use linear interpolation formula */
            else if(t1<time_input && times>time_input) 
            {
                printf("\n\nThe height corresponding to the time %.1lf is: %.1lf\n",
                        time_input, h1 + (heights - h1) / (times - t1) * (time_input - t1));
            }
            /* input current values to assign previous values */
            t1 = times;
            h1 = heights;
        }
        /* print error if time value is nonexisent in flight.txt */
        if(time_input>times) 
            printf("\n\nTime value does not exist in flight.txt.\n");
        /* close flight.txt */
        fclose(flight);
    }

    /* pause prompt in Windows so to copy/paste output. */
    system("PAUSE");
    return 0;
}
