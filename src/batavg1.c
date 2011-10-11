/* 
   Submitter: Taylor Lookabaugh
   Program: #13 - baseball stats.
   Batting Average Program
   file:  batavg1.cpp

   Glossary of abbreviations:
         
         BA = batting average
         OBP = on-base percentage
         SLG = slugging percentage
         PA = plate appearances
         H = hits
         BB = bases on balls (walks)
         HBP = times hit by pitch
         S = sacrafices
         AB = at bats
         _1B = singles
         _2B = doubles
         _3B = triples
         HR = home runs
         
*/

#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int _1B, _2B, _3B, HR, AB, PA, BB, HBP, S;
    
    double BA(int PA, int _1B, int _2B, int _3B, int HR, int S,
              int BB, int HBP);
    double OBP(int PA, int _1B, int _2B, int _3B, int HR, 
            int BB, int HBP);
    double SLG(int PA, int _1B, int _2B, int _3B, int HR, int S, 
            int BB, int HBP);

    
    printf("Enter a player's plate appearances: ");
    scanf("%i",&PA);
    
    printf("\n");

    printf("Enter the number of singles: ");
    scanf("%i",&_1B);

    printf("\n");

    printf("Enter the number of doubles: ");
    scanf("%i",&_2B);

    printf("\n");

    printf("Enter the number of triples: ");
    scanf("%i",&_3B);

    printf("\n");

    printf("Enter the number of home runs: ");
    scanf("%i",&HR);

    printf("\n");

    printf("Enter the number of sacrifices: ");
    scanf("%i",&S);

    printf("\n");

    printf("Enter the number of walks: ");
    scanf("%i",&BB);

    printf("\n");

    printf("Enter the number of times hit by pitch: ");
    scanf("%i",&HBP);
    
    printf("\n");

    printf("The player's batting average is %.3f\n",
         BA(PA, _1B, _2B, _3B, HR, S, BB, HBP));
    
    printf("\n");
    
    printf("The player's on-base percentage is %.3f\n",
            OBP(PA, _1B, _2B, _3B, HR, BB, HBP));

    printf("\n");

    printf("The player's slugging percentage is %.3f\n",
            SLG(PA, _1B, _2B, _3B, HR, S, BB, HBP));

    printf("\n");

         
    system("PAUSE");
    return (0);
}

/*----------------------------------------------------------------------------*/

double BA(int PA, int _1B, int _2B, int _3B, int HR, int S,
              int BB, int HBP)
{
   int AB, H;
   double avg;
   H = _1B+_2B+_3B+HR;
   AB = PA - (BB + HBP + S);
   avg = (double)H/AB;
   return avg;
}

/*----------------------------------------------------------------------------*/

double OBP(int PA, int _1B, int _2B, int _3B, int HR, 
        int BB, int HBP)
{
    int H;
    double obp;
    H = _1B+_2B+_3B+HR;
    obp = (H + BB + HBP)/(double)PA;
    return obp;
}

/*----------------------------------------------------------------------------*/

double SLG(int PA, int _1B, int _2B, int _3B, int HR, 
        int S, int BB, int HBP)
{
    int AB;
    double slg;
    AB = PA - (BB + HBP + S);
    slg = ((_1B*1.0)+(_2B*2.0)+(_3B*3.0)+(HR*4.0))/
        (double)AB;
    return slg;
}



/* SAMPLE OUTPUT
Enter a player's plate appearances: 112

Enter the number of singles: 23

Enter the number of doubles: 6

Enter the number of triples: 1

Enter the number of home runs: 5

Enter the number of sacrifices: 4

Enter the number of walks: 5

Enter the number of times hit by pitch: 2

The player's batting average is 0.347

Press any key to continue . . .
*/

/* After adding OBP and SLG functions
 OUTPUT
 Enter a player's plate appearances: 214

 Enter the number of singles: 42

 Enter the number of doubles: 5

 Enter the number of triples: 3

 Enter the number of home runs: 15

 Enter the number of sacrifices: 6

 Enter the number of walks: 12

 Enter the number of times hit by pitch: 3

 The player's batting average is 0.337

 The player's on-base percentage is 0.374

 The player's slugging percentage is 0.627

 Press any key to continue . . .

*/
