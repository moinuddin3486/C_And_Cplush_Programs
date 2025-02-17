#include <stdio.h>
// large digit in entered number
int main()
{
    int m,h,k=0;
    printf("Enter your number :");
    scanf("%d",&m);

    while(m!=0)
    {
        h=m%10;
        if(h>k)
        {
            k=h;
        }
        m=m/10;
    }
    printf("Biggest Digit is :%d",k);
}
// #include <stdio.h>
// // smallest digit in the entered number 
// int main()
// {
//     int m,n,k;
//     printf("Enter your number :");
//     scanf("%d",&m);
//          n=m%10;
//          while(m!=0)
//          {
//              k=m%10;  
//              if(k<n)
//              {
//                 n=k;
//              }
//              m=m/10;
//          }

//          printf("Your Smallest  digit is : %d",n);


// }
