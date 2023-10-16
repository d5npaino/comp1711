#include <stdio.h>

int main()
{

    int mark, answer = 0;
    while (answer == 0)
    {
        printf("Enter the mark: \n");
        scanf("%d", &mark);
        answer = 1;
        if (mark == 0)
        {
            printf("The mark of %d is zero\n", mark);
        }
        else if (mark < 0 || mark > 100) // validating mark input between 0-100 inclusive
        {
            printf("%d is not a valid mark\n", mark);
            answer = 0;
        }
        else if (mark < 40)
        {
            printf("The mark of %d is a fail\n", mark);
        }
        else if (mark <= 60)
        {
            printf("The mark of %d is a pass\n", mark);
        }
        else if (mark <= 70) // mark is OVER 60 for a 2:1
        {
            printf("The mark of %d is a 2:1\n", mark);
        }
        else if (mark <= 100) // mark is OVER 70 for a first
        {
            printf("The mark of %d is a first\n", mark);
        }
    }

    return 0;
}