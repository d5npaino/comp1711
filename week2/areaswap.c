#include <stdio.h>
#include <math.h>

int main()
{
const float pi = 3.14;
// M_PI is not defined in library?? have to make const variable
    float swapNum, input, temp, area;
    swapNum = 15;
    printf("Enter the radius of your circle: ");
    scanf("%f", &input);
    temp = swapNum;
    swapNum = input;
    input = temp;
    // Swapped values of 2 floating points by using a third variable as temporary storage
    area = swapNum * swapNum * pi;
    printf("The area of your circle is %.2f (2 d.p)\n", area);

}