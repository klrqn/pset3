#include <cs50.h>
#include <string.h>
#include <stdio.h>

#include "helpers.h"

int main(void)
{
    // int num = get_int("enter the numerator: ");
    // int den = get_int("enter the denominator: ");

    // int numberofbeats = (num * 8 / den);

    char n = get_char("enter the numerator: ");
    char d = get_char("enter the denominator: ");

    string nu = (string) n;
    string de = (string) d;

    int num = atoi(nu);
    int den = atoi(de);

    int numberofbeats = (num * 8 / den);


    printf("numerator     = %i\n", num);
    printf("denominator   = %i\n", den);
    // printf("den*8 mod nom*8 = %i\n", ((den*8) / (num*8)));
    // printf("divided by 8... = %i\n\n", ((num*8) / (den*8)) / 8);

    printf("number of eight notes: %i\n", numberofbeats);
}