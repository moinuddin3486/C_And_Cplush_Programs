// #include <stdio.h>
// int suhana(int m);
// int main()
// {
//     int s,c;
//     printf("Enter your number");
//     scanf("%d",&s);

//     c=suhana(s);

//     printf("The factoria of %d is %d",s,c);
// }
// int suhana(int m)
// {
//     if (m==0)
//     {
//         return 1;
//     }
//     else
//     {
//         return m*suhana(m-1);
//     }
// }
#include <stdio.h>
int main()
{
    int m,n,k,j=0;
    for(m=0;m<10;m++)
    {
        printf("Enter your number [%d]",m);
        scanf("%d",&m);
        
    }
    
    
    for(m=0;m<10;m++)
    {
        if(m>j)
        {
            j=m;
        }
    
}
printf("Big value : %d",j);
}