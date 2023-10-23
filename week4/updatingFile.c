#include <stdio.h>
#include "utils.h"

int main()
{
    char *filename = "numbers.dat";
    FILE *file = open_file(filename, "r+");

    int buffer_size = 100, linesRead;
    float numbers[buffer_size], total;
    char line_buffer[buffer_size];

    while (fgets(line_buffer, buffer_size, file) != NULL)
    {
        printf("%f\n", atof(line_buffer));
        numbers[linesRead] = atof(line_buffer);
        total += numbers[linesRead];
        linesRead++;
    }
    numbers[linesRead + 1] = total / linesRead;
    for (int i = 0; i < linesRead + 1; i++)
    {
        fprintf(file, "%f\n", numbers[i]);
    }
    fclose(file);
}