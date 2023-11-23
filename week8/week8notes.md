i++

--> Uses 'i' first, then increments

++i

--> Increments to 'i' first, then uses it

VERY USEFULL?!"??!?!?!?!?!
CAN BE PUT IN BRACKETS!??!!??!

while (token != NULL && i < size)
    {
        array[i++] = atoi(token);
        token = strtok(NULL, ",");
    }

Making functions return values can be an easy way to make them more defensive against invalid inputs / errors