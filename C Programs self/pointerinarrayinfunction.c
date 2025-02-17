#include <stdio.h>
void moin(int *ptr)

{
    printf("%d\n",*ptr);
}

int main()
{
    int non[10]={0,1,2,3,4,5,6,7,8,9,};

    int m;
    for(m=0;m<10;m++)
    {
        moin(&non[m]);
    }




}