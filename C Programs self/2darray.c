#include <stdio.h>
int main()
{
    int m;
    int n;
    int array[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    for (m = 0; m < 4; m++)
    {
        for (n = 0; n < 4; n++)
        {
            printf("The elements of [%d][%d] %d\n", m, n, array[m][n]);
        }
    }
}
