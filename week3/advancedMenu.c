#include <stdio.h>

int main()
{
    int option = -1;

    while (option < 0 || option > 3)
    {
        printf("Welcome to Fried (Not Sponsored), Our menu is:\n\n0: Mini Chicken Fillet Burger\n1: Regular Chicken Fillet Burger\n2: Chicken Shwarma Wrap\n3: 6 Chicken Wings\n4: Chips\n\nPlease select an item:");
        scanf("%d", &option);
        switch (option)
        {
        case 0:
            printf("Mini Chicken Fillet Burger has been selected\n");
            break;

        case 1:
            printf("Regular Chicken Fillet Burger has been selected\n");
            break;

        case 2:
            printf("Chicken Shwarma Wrap has been selected\n");
            break;

        case 3:
            printf("6 Chicken Wings has been selected\n");
            break;

        case 4:
            printf("Chips has been selected\n");
            break;

        default:
            printf("Invalid menu selection (%d), please try again:\n----------------------------------------------\n", option);
        }
    }
    return 0;
}