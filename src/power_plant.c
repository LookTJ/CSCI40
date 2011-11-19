#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    double power[6][7] = {{0, 0, 0, 0, 0, 0, 0}, {0, 2.1, 4.0, 8.7, 15.2, 21.0, 34.8},
            {0, 2.7, 4.2, 9.1, 18.0, 30.0, 41.5}, {0, 4.0, 12.9, 27.3, 52.6, 94.4, 131.8},
            {0, 3.3, 10.0, 22.7, 44.7, 80.9, 111.2}, {0, 1.8, 4.1, 8.5, 15.3, 27.2, 46.4}};
    double flowrate[6] = {0};
    double flowrate_rnd[6] = {0};
    double sum=0.0;

    int i, j;

    for(i=1; i<=5; i++)
    {
        printf("Enter a value for flowrate[%d] in gallons per second: ", i);
        while(flowrate[i]<0.5 || flowrate[i]>=6.5)
        {
            scanf("%lf", &flowrate[i]);
            if(flowrate[i]<0.5 || flowrate[i]>=6.5)
                printf("The value must be equal to 0.5 or between 0.5 and 6.5\n ");
        }
        if(flowrate[i] < 1.0)
            flowrate_rnd[i] = ceil(flowrate[i]);
        else
            flowrate_rnd[i] = floor(flowrate[i]);
    }

    
    for(i=1; i<=5; i++)
        {
            j=flowrate[i];
            printf("the power required for loop %d is %.1lf hp\n", i, power[i][j]);
            sum += power[i][j];
        }
    printf("The total power required for all loops is %.1lf\n", sum);


    system("PAUSE");
    return 0;
}
