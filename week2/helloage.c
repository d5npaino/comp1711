#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    // &age directs variable into adress of storage 'age'
    scanf("%d", &age);
    printf("Your age is %d\n", age);

    return 0;
}