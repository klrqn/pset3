// Helper functions for music

#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    // TODO
    // Complete the implementation of duration in helpers.c. Recall that this function should take as input as a string a fraction and
    // convert it into some integral number of eighths. You may assume that duration will only be passed a string formatted as X/Y,
    // whereby each of X and Y is a positive decimal digit, and Y is, moreover, a power of 2.

    // label numerator and denominator
    int num = (int) fraction[0] - '0';
    int den = (int) fraction[2] - '0';

    // maths - see 'durationtesting.c' ... took way too long :()
    int numberofbeats = (num * 8 / den);

    // return number of eigth note beats
    return numberofbeats;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    int octave = (int)(note[strlen(note) - 1] - '0');

    // // test octave
    // note = get_string();
    // printf("octave: %i\n", octave);

    double freq = 0.0;

    // get the initial (octave 4) frequency of the note
    if (note[0] == 'A')
    {
        freq = 440;
    }
    else if (note[0] == 'B')
    {
        freq = 440.0 * (pow(2.0, (2.0 / 12.0)));
    }
    else if (note[0] == 'C')
    {
        freq = 440.0 / (pow(2.0, (9.0 / 12.0)));
    }
    else if (note[0] == 'D')
    {
        freq = 440.0 / (pow(2.0, (7.0 / 12.0)));
    }
    else if (note[0] == 'E')
    {
        freq = 440.0 / (pow(2.0, (5.0 / 12.0)));
    }
    else if (note[0] == 'F')
    {
        freq = 440.0 / (pow(2.0, (4.0 / 12.0)));
    }
    else if (note[0] == 'G')
    {
        freq = 440.0 / (pow(2.0, (2.0 / 12.0)));
    }

    // shift frequency by factor of 2 depenedent on octave
    if (octave > 4)
    {
        for (int i = 0; i < octave - 4; i++)
        {
            freq *= 2.0;
        }
    }
    else if (octave < 4)
    {
        for (int i = 0; i < 4 - octave; i++)
        {
            freq /= 2.0;
        }
    }

    // adjust up / down 1 semitone if flat or sharpe
    if (note[1] == 'b')
    {
        freq /= (pow(2.0, (1.0 / 12.0)));
    }
    else if (note[1] == '#')
    {
        freq *= (pow(2.0, (1.0 / 12.0)));
    }

    // round and return as int
    int result = round(freq);
    return result;
    printf("frequency: %f\n", freq);
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    // TODO
    // if s represents a rest, return true
    if (s[0] == '\0')
    {
        return true;
    }
    // else return false
    else
    {
        return false;
    }
}
