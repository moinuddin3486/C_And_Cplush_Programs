#include <stdio.h>
int main()
{
    int a=10;
    int *ptr=&a;

    printf("%d\n",a);
    printf("address of a is %d\n",&a);
    printf("ptr ma su velue store chhe te  %d\n",ptr);
    printf("the value of a is %d\n",*ptr);
    printf("the value of a is %d\n",a);

}