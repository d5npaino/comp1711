#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// declaring this value so I can use it in different places
#define buffer_size 200

typedef struct
{
    char date[20];
    float bloodIron;
} reading;

typedef struct
{
    char date[11];
    char time[6];
    int steps;
} FITNESS_DATA;

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

FILE *open_file(char *filename, char *mode)
{
    FILE *file = fopen(filename, mode);
    if (file == NULL)
    {
        printf("Error: could not open file\n");
        return NULL;
    }
    return file;
}

int find_mean(reading *dataArray, int numReadings)
{
    // to do
}

int find_highest(reading *dataArray, int numReadings)
{
    // to do
}

int find_lowest(reading *dataArray, int numReadings)
{
    // to do
}

void continuousSteps(reading *dataArray, int numReadings)
{
    // to do
}