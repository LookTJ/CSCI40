/*
    Submitter: Taylor Lookabaugh
    Program: #13 - Craps game
    file: craps.c
    use rand(), srand(), rand_int in the play_craps() function.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    void play_craps( );
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

/*----------------------------------------------------------------------------*/

int rand_int(int a, int b)
{
    return rand()%(b - a + 1) + a;
}

/*----------------------------------------------------------------------------*/

int roll_pair()
{
    int rand_int(int a, int b);
    int die_1, die_2, total, total1;

    die_1 = rand_int(1,6);
    die_2 = rand_int(1,6);
    total = die_1 + die_2;
    total1=total;
    if(total==7 || total==11)
    {
        printf("%i\n", total);
        printf("You win!\n");
    }
    return total;
}

/*----------------------------------------------------------------------------*/

void play_craps()
{
    int k, previous;
    int roll_pair();
    unsigned int seed;
    printf("Enter a positive integer seed\n");
    scanf("%u", &seed);
    srand(seed);

    for(k=1; k<=10; k++)
    {
        printf("Roll number %i is \n", k);
        roll_pair();
    }

    return;

}
