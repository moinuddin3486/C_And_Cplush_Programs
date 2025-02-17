#include <stdio.h>
int moin(int m,int n);


int main()
{
    int a=10;
    int b=20;
    int c;

    c=moin(a,b);    

    printf("%d",c);  
    
    
}
int moin(int m,int l)
{
    return m+l;
}
