#include <stdio.h>
void suhana(int arr[]);
int main()
{
    int mom[]={1,2,3,4,5,6,7,8,9,10};
    int m;
    int n;

    
    suhana(mom);
    for(m=0;m<10;m++)
    {
        printf("The elements of [%d] [%d]\n",m,mom[m]);
    }

}
void suhana(int arr[])
{
    int temp;
    int m;
    
    for(m=0;m<5;m++)
    {                       
        temp=arr[m];       ///   temp 1,2,3,4,5,6,7,8,9,10 
        arr[m]=arr[9-m];  ///    arr[m]= 10,9,8,7,6,5,4,3,2,1
                               
        arr[9-m]=temp;   ///    arr[9-m]=10,9,8,7,6,5,4,3,2,1
                       
    }
}
// #include <stdio.h>
// int main()
// {                 0,1,2,3,4,5,6,7,8,9
//     int moin[10]={1,2,3,4,5,6,7,8,9,10};
//     int m;
//     for(m=0;m<10;m++)
//     {
//         printf("The elemts of [%d] is [%d]\n",m,moin[9-m]);
//     }
// }