/*
    Submitter: Taylor Lookabaugh
    Program: #15 - recursive function of a sequence adding 3 each time
*/

#include <stdlib.h>
#include <stdio.h>

int recursive(int n)
{
    if(n==0)
        return 2;
    else
        return recursive(n-1)+3;
}

int main (void)
{
    int x;

    do
    {
        printf("Enter a value of 0 or greater: ");
        scanf("%d", &x);
    }while(x<0);


    printf("P(%d) = %d\n", x, recursive(x));

    system("PAUSE");
    return 0;
}
