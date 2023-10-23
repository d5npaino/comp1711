#include <stdio.h>

int main()
{
    int input[10];
       float mean;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter your number: \n");
        scanf("%d", &input[i]);
        mean += input[i];
        printf("%d %f\n", input[i], mean);
        
    }
    mean /= 10;
    printf("Your mean number is: %.1f\n", mean);
    return 0;
}