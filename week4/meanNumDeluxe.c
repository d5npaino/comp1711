#include <stdio.h>
#include "utils.h"

int main()
{
    char *filename = "meanNum.txt";
    FILE *file = open_file(filename, "w"); // or "a", "w+", "a+"

        int iterations;
        printf("Enter how many numbers to enter: \n");
        scanf("%d", &iterations);       
       float mean;
    for (int i = 0; i < iterations; i++)
    {
        int input;
        printf("Enter your number: \n");
        scanf("%d", &input);
        mean += input;
        printf("%d %f\n", input, mean);
        
    }
    mean /= iterations;
    fprintf(file, "Your mean number is: %.3f [3 d.p]\n", mean);
    fclose(file);
    return 0;
}