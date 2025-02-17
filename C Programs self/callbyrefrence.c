#include <stdio.h>
void swap(int *a, int *b); // funaction declaration
int main()
{
    int a = 10;
    int b = 20;

    printf("\nBefore swap value of a=%d", a);
    printf("\nBefore swap value of b=%d", b);

    swap(&a, &b);

    printf("\nAfter swap value of a=%d", a);
    printf("\nAfter swap value of b=%d", b);
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;   // a ne temp ma store karyu
    *a = *b;     // b ne a ma store karyu
    *b = temp;  //  temp ne b ma store karyu
}

// short ma ama call by refrence ma je value mein function ma hoy chhe tenu address apvanu hova thi teni value ma canges kari sakay chhe