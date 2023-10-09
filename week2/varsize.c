#include <stdio.h>

int main()
{
    int integer;
    float floating;
    char character;
    double numDouble;
    // Should find storage space available for each variable in bytes
    printf("Size of int: %zu bytes\n", sizeof(integer));
    printf("Size of float: %zu bytes\n", sizeof(floating));
    printf("Size of char: %zu bytes\n", sizeof(character));
    printf("Size of double: %zu byte\n", sizeof(numDouble));

    return 0;
}