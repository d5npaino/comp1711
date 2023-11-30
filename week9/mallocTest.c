#include <stdio.h>
#include <stdlib.h>

int main()
{

    char *adress2 = malloc(200 * sizeof(char));
    int *data = malloc(70 * sizeof(int));

    int count;
    printf("enter number of values:\n");
    scanf("%d", &count);

    double *samples = malloc(count * sizeof(double));

    int **array2D;
    int numRows = 10;
    int numCols = 100;

    array2D = malloc(numRows * sizeof(int *));
    for (int i = 0; i < numRows; i++)
    {
        array2D[i] = malloc(numCols * sizeof(int));
    }

    return 0;
}