#include <stdio.h>

int main(){
    int num = 10;
    printf("%d\n", a);
    return 0;
}

-> gcc first.c -o first [compile source code]
-> ./first
EVERY CHANGE NEEDS TO BE SAVED AND RE-COMPILED
\n can be used to print text on a new line
'%'d is a format specifier for printing numbers (decimat int)

%c - single char
%s - string
%d - decimal int
%f - floating point number

#include <math.h> - library required for mathematical functions

 ~# git add -A #~

When using a 'string' [array of char's], you dont have to use '&name' but instead 'name' :-

char name[15];
printf("Hello, please enter your name: ");
scanf("%s", name);

As this is an array, it essentially already sets up the memory location for your input as the array of characters under the name 'name'

RANDOM NUMBERS:
#include <time.h>
#include <stdlib.h>

srand(time(NULL));
int value = rand() % 100

WHERE 'rand() % 100' specified numbers inclusively 0-99
REMEMBER there are two libraries

Arrays have to have a specified size, and everything inside the array is the same data type