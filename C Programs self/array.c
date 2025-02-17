#include <stdio.h>
int main()
{
    int array[20],m,n;
     

     for(m=0;m<20;m++)
     {
        array[m]=m+100;    // arrays initialization  // arrays ma value muyki
     }

     
     for(n=0;n<20;n++)
     {
        printf("The elements [%d] %d \n ",n,array[n]);
     }
     

}