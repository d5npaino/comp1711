char* filename = "data.txt";
    FILE *file = fopen (filename, "w"); // or "a", "w+", "a+"
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    [CODE WITH FILE]

    fclose(file);
    return 0;

fprintf(file,"[text]")

IMPORTANT REMEMBER !!!!

    #include <stdlib.h>
    num = atoi(string); // CONVERT STRING TO INT (YOU FORGET THIS ALOT)

cheers

Header Files
Commonly named 'utility' or similar, and called by using:
    #ifndef UTILS_H
    #define UTILS_H
Inside of your header file
Then inside of your source code call:
    #include <stdio.h>
    #include "utils.h"
Header files have to be specified when compiling
(Happens automatically but just remember just incase)

 -> gcc utils.h write_to_file_h.c -o write

 Structures for C

 struct student {
    char name[20];
    char studentID[11];
    int mark;
 }

When storing strings in structures, beware that student.name onloy refers to the first character of name, not the whole string
Therefore we use strcpy(); to copy the string so it can be stored in full;

strcpy(student[counter].name,name);