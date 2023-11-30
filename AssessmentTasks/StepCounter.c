#include "FitnessDataStruct.h"

int main()
{
    FITNESS_DATA records[500];
    // default file just incase user crashes program
    FILE *file = open_file("FitnessData_2023.csv", "r");
    char line[buffer_size];
    char filename[buffer_size];
    char steps[100], time[6], date[11];
    char choice;
    int counter = 0;

    while (1)
    {
        int position = 0;
        int lowStep = 99999;
        int highStep = 0;
        int mean = 0;
        int count = 0;
        int tempCount = 0;
        printf("A: Specify the filename to be imported\n");
        printf("B: Display the total number of records in the file\n");
        printf("C: Find the date and time of the timeslot with the fewest steps\n");
        printf("D: Find the data and time of the timeslot with the largest number of steps\n");
        printf("E: Find the mean step count of all the records in the file\n");
        printf("F: Find the longest continuous period where the step count is above 500 steps\n");
        printf("Q: Exit\n");

        // get the next character typed in and store in the 'choice'
        choice = getchar();

        // this gets rid of the newline character which the user will enter
        // as otherwise this will stay in the stdin and be read next time
        while (getchar() != '\n')
            ;

        // switch statement to control the menu.
        switch (choice)
        {
        // this allows for either capital or lower case
        case 'A':
        case 'a':
            printf("Please enter the name of the data file:\n");
            fgets(line, buffer_size, stdin);
            sscanf(line, " %s ", filename);
            counter = 0;
            if (open_file(filename, "r") != NULL)
            {
                while (fgets(line, buffer_size, file) != NULL)
                {
                    tokeniseRecord(line, ",", date, time, steps);
                    strcpy(records[counter].date, date);
                    strcpy(records[counter].time, time);
                    records[counter].steps = atoi(steps);
                    counter++;
                }
            }
            else
            {
                printf("Error: could not open file\n");
                return 1;
            }
            break;

        case 'B':
        case 'b':
            printf("Total records: %d\n", counter);
            fclose(file);
            break;

        case 'C':
        case 'c':
            for (int i = 0; i < counter; i++)
            {
                if (records[i].steps < lowStep)
                {
                    lowStep = records[i].steps;
                    position = i;
                }
            }
            printf("Fewest Steps: %s %s\n", records[position].date, records[position].time);
            break;

        case 'D':
        case 'd':
            for (int i = 0; i < counter; i++)
            {
                if (records[i].steps > highStep)
                {
                    highStep = records[i].steps;
                    position = i;
                }
            }
            printf("Largest Steps: %s %s\n", records[position].date, records[position].time);
            break;

        case 'E':
        case 'e':
            for (int i = 0; i < counter; i++)
            {
                mean += records[i].steps;
            }
            mean = (mean + (counter / 2)) / counter; // Use of (counter / 2) to make sure instead of truncating value, it rounds up
            printf("Mean Number of Steps: %d\n", mean);
            break;

        case 'F':
        case 'f':
            for (int i = 0; i < counter; i++)
            {
                if (records[i].steps > 500)
                {
                    tempCount++;
                }
                else
                {
                    if (tempCount > count)
                    {
                        count = tempCount;
                        position = i - count;
                    }
                    tempCount = 0;
                }
            }
            printf("Longest period start: %s %s\n", records[position].date, records[position].time);
            printf("Longest period end: %s %s\n", records[position + count - 1].date, records[position + count - 1].time);
            break;

        case 'Q':
        case 'q':
            return 0;
            break;

        // if they type anything else:
        default:
            printf("Invalid choice\n");
            break;
        }
        printf("\n");
    }
}