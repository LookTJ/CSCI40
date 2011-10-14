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
    int die_1, die_2, total, total1;

    die_1 = rand_int(1,6);
    die_2 = rand_int(1,6);
    total = die_1 + die_2;
    total1=total;
    return total;
}

/*----------------------------------------------------------------------------*/

void play_craps()
{
    int k, sum, previous;
    time_t seconds;
    seconds = time(NULL);
    srand(seconds);

    for(k=1; k<=10000; k++)
    {
        sum = roll_pair();
        printf("Roll number %i is %i \n", k, sum);
        if(k==1 && (sum==7 || sum==11))
        {
            printf("You win!\n");
            break;
        }
        else if(k==1 && (sum==2 || sum==3 || sum==7 || sum==11 || sum==12))
        {
            printf("You lose!\n");
            break;
        }
        else if(k>1 && (sum==7 || sum==previous))
        {
            printf("You win!");
            break;
        }
        previous = sum;
    }

    return;

}

/*----------------------------------------------------------------------------*/

int main(void)
{
    char answer, junk;
    do
    {
        printf("\n\n\n");
        printf("Would you like to play a game of craps \? Type y for yes "
        "or n for no:");
        answer = getchar();
        junk = getchar();
        if (answer == 'y' || answer == 'Y')
            play_craps();
    }while (answer == 'y' || answer == 'Y');
    system("PAUSE");
    return (0);
}
