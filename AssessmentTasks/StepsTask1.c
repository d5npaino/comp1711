#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct
{
    char date[11];
    char time[6];
    int steps;
} FITNESS_DATA;

// Define any additional variables here

// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps)
{
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);

    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL)
    {
        strcpy(date, token);
    }

    token = strtok(NULL, delimiter);
    if (token != NULL)
    {
        strcpy(time, token);
    }

    token = strtok(NULL, delimiter);
    if (token != NULL)
    {
        strcpy(steps, token);
    }

    // Free the duplicated string
    free(inputCopy);
}

// Complete the main function
int main()
{
    char *filename = "FitnessData_2023.csv";
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    int buffer_size = 500, counter = 0;
    char line_buffer[buffer_size], steps[100], time[6], date[11];
    FITNESS_DATA records[500];

    while (fgets(line_buffer, buffer_size, file) != NULL)
    {
        tokeniseRecord(line_buffer, ",", date, time, steps);
        strcpy(records[counter].date, date);
        strcpy(records[counter].time, time);
        records[counter].steps = atoi(steps);
        counter++;
    }

    printf("Number of records in file: %d\n", counter);
    for (int i = 0; i < 3; i++)
    {
        printf("%s/%s/%d\n", records[i].date, records[i].time, records[i].steps);
    }

    fclose(file);
    return 0;
}