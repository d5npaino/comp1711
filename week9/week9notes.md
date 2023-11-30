Linked Lists with nodes

node first;
node *linkedList = &first;

POINTERS

int var = 10;
// creates an int pointer called 'var_adress' and set it to the adress of the var
int *var_address = &var;

MALLOC

Malloc() is from <stdlib.h>
It ALLOCATES memory
Allocates size bytes of uninitialized storage.

e.g.
int* numPointer = malloc(4*sizeof(int))

sizeof(int) = 4
sizeof(double) = 8
sizeof(char) = 1

CATCH

char* name = "thisisaverylongname"
sizeof(name) = 8

--> This is not telling you contents of name, but instead the number of bytes the pointer is using
[DOES NOT WORK LIKE LENGTH]

Passing by value = can't change
Passing by reference = can change