#include <stdio.h>
int main()
{
    int num[10];
    int m,n;
    for(m=0;m<10;m++)
    {
        printf("enter your value");
        scanf("%d",&num[m]);
    }

    for(n=0;n<10;n++)
    {
        printf("The elements of [%d] [%d]\n",n,num[n]);
    }
}