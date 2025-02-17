// #include <stdio.h>
// int main()
// {
//     int m, n = 1;

//     printf("Enter your number : ");
//     scanf("%d", &m);
//     while (m > 0) // m 0 thi moto hase to j loop chalse
//     {
//         n= n * m;
//         m--;
//     }

//     printf("factorial   = %d", n);

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int m,n,o,p=1;
//     printf("Enter your value here :");
//     scanf("%d",&m);
//     for(n=1;n<=m;n++)
//     {
//         p *= n; 

//     }
//     printf(" The factorial %d is=%d",m,p);
   
// }
#include <stdio.h>
int main()
{
    int m,n,z=1;
    char k='A';
    for(m=1;m<=6;m++)
    {
        for(n=1;n<=m;n++)
        {
            printf("%c ",k);
            
        
        }
        printf("\n");
    }
}
