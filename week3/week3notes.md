#include <stdio.h>
float sum (float a, float b);

int main () 
{
    float y = 2;
    float z = sum(5, y); // calling our new function

    printf ("The sum of 5 and %f is %f\n", y, z);

    return 0;
}

float sum (float a, float b)
{
    float answer;
    answer = a + b;
    return answer;
}


WE CAN DECLARE THE FUNCTION 'float sum (float a, float b);' TO PREVENT COMPILER ISSUES
since compilers work line from line, if main comes before the function, the compiler wont know what 'sum' is
so if we declare it at the start, this was the compiler already knows what the actual function is, to prevent compiler issues