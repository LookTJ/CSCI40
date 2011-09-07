/* Division remainder */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int x, y, division;

    printf("Enter a constant > ");
    scanf("%i", &x);
    printf("enter a second constant > ");
    scanf("%i", &y);

    division = x%y;

    printf("the remainder is %i\n",division);


    system("pause");
    return(0);
}
