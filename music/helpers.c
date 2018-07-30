// Helper functions for music

#include <cs50.h>
#include <string.h>
#include <stdio.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    // TODO
    // Complete the implementation of duration in helpers.c. Recall that this function should take as input as a string a fraction and
    // convert it into some integral number of eighths. You may assume that duration will only be passed a string formatted as X/Y,
    // whereby each of X and Y is a positive decimal digit, and Y is, moreover, a power of 2.

    // label numerator and denominator
    int num = fraction[0];
    int den = fraction[2];

    // maths - see 'durationtesting.c'
    int numberofbeats = (num*8 / den*8) / 8;

    // return number of eigth note beats
    return numberofbeats;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    printf("%s", note);
    return 1;
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    // TODO
    // if s represents a rest, return true
    if (!s)
    {
        return true;
    }
    // else return false
    else
    {
        return false;
    }
}
