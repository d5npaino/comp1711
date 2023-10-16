#include <stdio.h>

int main()
{

    int input, answer = 0;
    while (answer == 0)
    {
        printf("Enter your number: ");
        scanf("%d", &input);
        answer = 1;
        if (input == -1)
        {
            for (int i = 0; i < 100; i++)
            {
                printf("CODE TERMINATION IMMINENT\n");
            }
        }
        else if (input >= 0 && input <= 100)
        {
            printf("%d is within the range of 0-100 inclusively\n", input);
            answer = 0;
        }
        else
        {
            printf("%d is not within the range of 0-100 inclusively\n", input);
            answer = 0;
        }
    }
    return 0;
}