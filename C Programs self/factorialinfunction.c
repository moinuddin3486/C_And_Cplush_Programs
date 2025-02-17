#include <stdio.h>
int suhana(int);
int main()
{
    int s, m;
    printf("Enter your number:");
    scanf("%d", &s);

    printf("your entered value is %d\n",s);

    m = suhana(s);

    printf("factrial of %d is %d", s, m);
}
int suhana(int a)
{
    if (a == 0 )
        return 2;
    else
        return (a * suhana(a - 1));
}
