#include <stdio.h>

int main()
{
    int option = -1;

    while (option < 0 || option > 3)
    {
        printf("Enter your option [0-3]\n");
        scanf("%d", &option);
        switch (option)
        {
        case 0:
            printf("Option 0 has been selected\n");
            break;

        case 1:
            printf("Option 1 has been selected\n");
            break;

        case 2:
            printf("Option 2 has been selected\n");
            break;

        case 3:
            printf("Option 3 has been selected\n");
            break;

        default:
            printf("Invalid option selection (%d)\n", option);
        }
    }
    return 0;
}