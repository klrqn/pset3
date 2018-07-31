#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include  <math.h>

#include "helpers.h"

int main(void)
{
    string note = "A#4";

    // get octave depending on whether the note is accidental or not
    int octave = (int) (note[strlen(note) - 1] - '0');
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
    printf("frequency: %f\n", freq);
    printf("result   : %d\n", result);
    return result;
}
