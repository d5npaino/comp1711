#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));
    int value = rand() % 100, guess = 0;
    // IF i new how to randomise 'value' I would
    while (value != guess)
    {
        printf ("Please enter your guess [0-100]:\n");
        scanf ("%d", &guess);
        if (value > guess)
        {
            printf ("Your guess is lower than the actual number\n");
        }
        else if (value < guess)
        {
            printf ("Your guess is higher than the actual number\n");
        }
    }
    printf ("You're correct! the value was %d\n", value);
// Program that has user guess a value
    return (0);
}