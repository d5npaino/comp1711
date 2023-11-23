#include "FitnessDataStruct.h"

int main()
{
    FITNESS_DATA records[500];
    // default file just incase user crashes program
    FILE *file = open_file("FitnessData_2023.csv", "r");
    char line[buffer_size];
    char filename[buffer_size];

    char steps[100], time[6], date[11];

    // get filename from the user
    printf("Please enter the name of the data file: ");

    // these lines read in a line from the stdin (where the user types)
    // and then takes the actual string out of it
    // this removes any spaces or newlines.
    fgets(line, buffer_size, stdin);
    sscanf(line, " %s ", filename);

    char choice;
    int counter = 0;
    float mean = 0;

    while (1)
    {
        FILE *input = open_file(filename, "r");

        printf("A: Enter filename to be imported\n");                         // BRONZE
        printf("B: View your average blood iron level\n");                    // BRONZE
        printf("C: View your lowest blood iron level\n");                     // SILVER
        printf("D: View your highest blood iron level\n");                    // SILVER
        printf("E: View the blood iron levels for a specific month\n");       // SILVER/GOLD
        printf("F: See some additional statistics about your iron levels\n"); // GOLD - see readme.md
        printf("G: Generate a graph of your iron levels\n");                  // GOLD/PLATINUM - see readme.md
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
            printf("Please enter the name of the data file: ");
            // these lines read in a line from the stdin (where the user types)
            // and then takes the actual string out of it
            // this removes any spaces or newlines.
            fgets(line, buffer_size, stdin);
            sscanf(line, " %s ", filename);
            open_file(filename, "r");

            counter = 0;
            while (fgets(line, buffer_size, file) != NULL)
            {
                tokeniseRecord(line, ",", date, time, steps);
                strcpy(records[counter].date, date);
                strcpy(records[counter].time, time);
                records[counter].steps = atoi(steps);
                counter++;
            }
            return 1;
            break;

        case 'B':
        case 'b':
            printf("Total records: %d\n", counter);
            fclose(file);
            break;

        case 'C':
        case 'c':
            int position = 0, lowStep = 99999;
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
            int position = 0, highStep = 0;
            for (int i = 0; i < counter; i++)
            {
                if (records[i].steps > lowStep)
                {
                    highStep = records[i].steps;
                    position = i;
                }
            }
            printf("Largest Steps: %s %s\n", records[position].date, records[position].time);
            break;

        case 'E':
        case 'e':
            int mean = 0;
            for (int i = 0; i < counter; i++)
            {
                    mean += records[i].steps;
            }
            mean /= counter; // CHECK THIS TO SEE IF ROUNDS UP
            printf("Largest Steps: %s %s\n", records[position].date, records[position].time);
            break;

        case 'F':
        case 'f':
            return 0;
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
    }
}