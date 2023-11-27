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
        printf("A: Enter filename to be imported\n");
        printf("B: Display total number of records in the file\n");
        printf("C: View the date and time of the timeslot with the fewest steps\n");
        printf("D: View the data and time of the timeslot with the largest number of steps\n");
        printf("E: View the mean step count of all the records in the file\n");
        printf("F: View the mean step count of all the records in the file\n");
        printf("Q: Exit the program\n");

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
            printf("\nPlease enter the name of the data file:\n");
            // these lines read in a line from the stdin (where the user types)
            // and then takes the actual string out of it
            // this removes any spaces or newlines.
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
                return 1;
            }
            break;

        case 'B':
        case 'b':
            printf("\nTotal records: %d\n", counter);
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
            printf("\nFewest Steps: %s %s\n", records[position].date, records[position].time);
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
            printf("\nLargest Steps: %s %s\n", records[position].date, records[position].time);
            break;

        case 'E':
        case 'e':
            for (int i = 0; i < counter; i++)
            {
                mean += records[i].steps;
            }
            mean = (mean + (counter / 2)) / counter; // Use of (counter / 2) to make sure instead of truncating value, it rounds up
            printf("\nMean Number of Steps: %d\n", mean);
            break;

        case 'F':
        case 'f':
        // DO MEEEEEEEEEEEEEEEE
            return 0;
            break;

        case 'Q':
        case 'q':
            return 0;
            break;

        // if they type anything else:
        default:
            printf("\nInvalid choice\n");
            break;
        }
        printf("\n");
    }
}