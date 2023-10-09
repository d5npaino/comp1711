#include <stdio.h>

int main()
{
    float width, length;
    printf("Please enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Please enter the width of the rectangle: ");
    scanf("%f", &width);

    float area = width * length;
    // multiplication of two float value
    printf("The are of your specified rectangle is %.3f (3 d.p)\n", area);
    // set to 3 d.p
    return 0;
}