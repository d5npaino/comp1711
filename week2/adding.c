#include <stdio.h>

int main()
{
    float a;
    float b = 3.641;
    float c;

    a = 2.897;
    c = a + b;
    // Truncating value if 'c' is an int / .3f gives answers to 3 d.p
    printf("The sum of %.3f and %.3f is %.3f\n", a, b, c);

    return 0;
}