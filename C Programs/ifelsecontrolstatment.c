/*
control or conditional statment
syntax;
if (condition){
    true statment;
}
if else
if(condition)
{
    true condition;
}
else{
    false condition;
}*/
#include <stdio.h>
// If Else ne controle statments pan kahevay
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);

    if (age>18)
    {
        printf("You can drive the car");
    }
    else
    {
        printf("You can't drive the car");
    }
}
