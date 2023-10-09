#include <stdio.h>

int main()
{
    // Storing name as char array / 15 slots of memory for string
    char name[15];
    // Prompting user input for name
    printf("Hello, please enter your name: ");
    scanf("%s", name);
    printf("Your name is %s\n", name);

    return 0;
}