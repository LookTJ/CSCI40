//  Submitter: Taylor Lookabaugh
//  Program: #20 - Airline Seating read from flight.txt
//          containing 38 rows and 6 seats per.
//          0 or 1 to determine seat availability.
//  file: flight_seating.c

#include <stdlib.h>
#include <stdio.h>
#define N 38

int main (void)
{
    int row[38][6];
    int k, n, pairs=0;
    FILE *flight_data;
    n = 38;

    flight_data = fopen("flight.txt", "r");

    if(flight_data == NULL)
        perror("The following error occured");
    else
    {
        printf("        AVAILABLE SEAT PAIRS\n\n\n");
        printf("      ROW        SEATS\n");
        for(k=0; k<=37; k++)
            {
                fscanf(flight_data, "%d %d %d %d %d %d\n", &row[k][0], &row[k][1], 
                        &row[k][2], &row[k][3], &row[k][4], &row[k][5]);
                if(row[k][0]==0 && row[k][1]==0)
                {
                    printf("    %4d      %4d,2\n", k+1, 1);
                    pairs++;
                }
                if(row[k][1]==0 && row[k][2]==0)
                {
                    printf("    %4d      %4d,3\n", k+1, 2);
                    pairs++;
                }
                if(row[k][3]==0 && row[k][4]==0)
                {
                    printf("    %4d      %4d,5\n", k+1, 4);
                    pairs++;
                }
                if(row[k][4]==0 && row[k][5]==0)
                {
                    printf("    %4d      %4d,6\n", k+1, 5);
                    pairs++;
                }
            }
        if(pairs==0)
            printf("\n\n    There are no seat pairs available.\n");

        fclose(flight_data);
    }
    

    system("PAUSE");
    return 0;
}

/* OUTPUT:
        AVAILABLE SEAT PAIRS


      ROW        SEATS
       1         1,2
       1         2,3
       2         5,6
       3         4,5
       5         1,2
       8         4,5
       8         5,6
       9         1,2
       9         2,3
       9         5,6
      12         1,2
      12         2,3
      13         5,6
      16         1,2
      17         4,5
      19         1,2
      19         2,3
      20         1,2
      21         4,5
      21         5,6
      22         1,2
      27         1,2
      27         2,3
      28         5,6
      29         1,2
      29         2,3
      29         4,5
      29         5,6
      30         1,2
      31         1,2
      33         1,2
      33         2,3
      34         1,2
      34         5,6
      35         4,5
      35         5,6
      36         1,2
      36         2,3
      37         4,5
      38         2,3

      Corresponding data file:

0 0 0 0 1 1
1 1 0 1 0 0
1 0 1 0 0 1
1 1 1 0 1 0
0 0 1 1 0 1
0 1 1 0 1 0
0 1 0 0 1 0
0 1 1 0 0 0
0 0 0 1 0 0
0 1 1 1 1 0
0 1 0 0 1 1
0 0 0 1 1 0
0 1 1 1 0 0
0 1 0 1 0 1
1 1 0 1 0 1
0 0 1 0 1 0
0 1 1 0 0 1
1 1 1 1 1 0
0 0 0 0 1 1
0 0 1 1 0 1
0 1 1 0 0 0
0 0 1 1 1 1
1 1 1 0 1 1
0 1 1 1 0 1
0 1 0 1 0 1
0 1 1 0 1 1
0 0 0 1 1 1
0 1 0 1 0 0
0 0 0 0 0 0
0 0 1 1 1 1
0 0 1 1 1 1
1 1 1 1 1 1
0 0 0 1 1 1
0 0 1 1 0 0
1 1 1 0 0 0
0 0 0 1 1 1
0 1 1 0 0 1
1 0 0 1 1 0
*/
