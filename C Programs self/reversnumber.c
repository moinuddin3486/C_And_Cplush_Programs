#include <stdio.h>
int main()
{
    int m,n,i;
    i=0;
    printf("Enter your number");
    scanf("%d",&m);
    while(m!=0)
    {
        n=m%10;
        i=i*10+n;
        m=m/10;
    }
    printf("Your Revers Number Is: %d",i);
}
