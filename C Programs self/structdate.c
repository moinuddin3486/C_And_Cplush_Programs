#include <stdio.h>
struct date
{
    int d,m,y;
}d1;
int main()
{
     struct date d1={10,8,2002};
     printf("%d,",d1.d);
     printf("0%d,",d1.m);
     printf("%d",d1.y);

}
