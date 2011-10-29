/*
    Submitter: Taylor Lookabaugh
    Program: #13 - Craps game
    file: craps.c
    use rand(), srand(), rand_int in the play_craps() function.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*----------------------------------------------------------------------------*/

int rand_int(int a, int b)
{
    return rand()%(b - a + 1) + a;
}

/*----------------------------------------------------------------------------*/

int roll_pair()
{
    int die_1, die_2, total;

    die_1 = rand_int(1,6);
    die_2 = rand_int(1,6);
    total = die_1 + die_2;
    return total;
}

/*----------------------------------------------------------------------------*/

int w=0, l=0;
void play_craps()
{
    int k=1, sum, sum1, first;

    while(1)
    {
        sum = roll_pair();
        printf("Roll number %d is %d \n", k, sum);
        if(k==1 && (sum==7 || sum==11))
        {
            printf("You win!\n\n\n");
            w++;
            break;
        }
        else if(k==1 && (sum==2 || sum==3 || sum==12))
        {
            printf("You lose!\n\n\n");
            l++;
            break;
        }
        else if(k==1)
        {
            printf("Keep rolling...\n");
            first = sum;
            k++;
            continue;
       }
        else if(k>1 && sum==first)
        {
            printf("You win.\n\n\n");
            w++;
            break;
        }
        else if(k>1 && sum==7)
        {
            printf("You lose.\n\n\n");
            l++;
            break;
        }

        k++;
    }

    return;

}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

int main(void)
{
    int k;
    char answer, junk;
    time_t seconds;
    seconds = time(NULL);
    srand(seconds);
    do
    {
        printf("\n\n\n");
        printf("Would you like to play a game of craps \? Type y for yes "
        "or n for no:");
        answer = getchar();
        junk = getchar();
        if (answer == 'y' || answer == 'Y')
        {
            for(k=1; k<=10000; k++)
            {
                play_craps();
            }
        }
    }while (answer == 'y' || answer == 'Y');
    printf("Wins: %d\n", w);
    printf("Losses: %d\n", l);
    system("PAUSE");
    return (0);
}
