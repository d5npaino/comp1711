#include <stdio.h>

int main()
{
    int a = 0, b = 1;
// Quadratic while loop
    while (b > 0)
    {
        printf("b is equal to %d\n", b);
        a++;
        b = 5 - ((a - 2) * (a - 2));
    }
    printf("I've finished the loop and b is equal to %d\n", b);
    //whack values of a and b (x and y respectively) into co-ordinates to model a quadratic on a graph
    return (0);
}