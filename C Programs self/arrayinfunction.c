#include <stdio.h>
void moin(int array[]);

int main()
{
    int marks[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    moin(marks);
}
void moin(int array[])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("The elements [%d] %d\n", i, array[i]);
    }
}

//