#include <stdio.h>
void swap(int a, int b); // funaction declaration
int main()
{
    int a = 10;
    int b = 20;

    printf("\nBefore swap value of a=%d", a);
    printf("\nBefore swap value of b=%d", b);

    swap(a, b);

    printf("\nAfter swap value of a=%d", a);
    printf("\nAfter swap value of b=%d", b);
}
          // formal perameter
void swap(int a, int b)
{
     int temp;

    temp = a;   // a ne temp ma store karyu
    a = b;     // b ne a ma store karyu
    b = temp;  //  temp ne b ma store karyu
}

// short ma call by value ma actual value fornal perameter ma jaychhe
// jethi ama value ma koi pan prakar no chengis kari sakato nathi
// jo apde a ane b nu address share karyu hotu to teni value ma changis thato
// pan apde value share kari chhe jethi tema koi pan prakar no ferfar thay nai
