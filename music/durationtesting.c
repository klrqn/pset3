#include <cs50.h>
#include <string.h>
#include <stdio.h>

#include "helpers.h"

int main(void)
{
    int num = 4;
    int den = 1;

    int numberofbeats = (num*8 / den*8) / 8;

    printf("numerator*8     = %i\n", num*8);
    printf("denominator*8   = %i\n", den*8);
    printf("num*8/den*8     = %i\n", (num*8 / den*8));
    printf("divided by 8... = %i\n\n", (num*8 / den*8) / 8);

    printf("number of eight notes: %i\n", numberofbeats);
}