#include <stdio.h>
int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int moin = 10;

    printf("%d\n", &array[0]);
    printf("%d\n", &array[1]);
    printf("%d\n", &array[2]);
    printf("%d\n", &array[3]);

    int suhana = 10;
    int *ptr = &suhana;

    printf("%d\n", moin);
    printf("%d\n", &moin);
    printf("%d\n", ptr);
    printf("%d\n", *ptr);
}