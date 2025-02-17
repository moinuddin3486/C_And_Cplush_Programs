#include <stdio.h>
#include <string.h>
typedef struct student
{
    int id;
    char name[50];
    float age;
    
}std;
int main()
{
    //std moin;              // typedef ma banne rite run thay chhe 
    struct student moin;  // a pan rite run thay

    moin.id=10530;
    strcpy(moin.name,"momin mohammad moinuddin");
    moin.age=22.2;

    
   

    printf("The Enployee id of moin is %d\n",moin.id);
    printf("The full name of moin is %s\n",moin.name);
    printf("The age of moin is %f\n",moin.age);
}