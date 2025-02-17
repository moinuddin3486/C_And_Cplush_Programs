#include <stdio.h>
#include <string.h>
 struct employee
{
  int id;
  char name[50];
  float age;
};

int main()
{
  struct employee e1, moin, suhana, sakib;
  e1.id = 100;
  strcpy(e1.name, "moinuddin momin");
  e1.age = 12.5;

  moin.id = 264964;
  strcpy(moin.name, "moinddin mahemud bhai momin");
  moin.age = 54;

  suhana.id = 1084028;
  strcpy(suhana.name, "suhana parveen momin");
  suhana.age = 25;

  sakib.id = 108050;
  strcpy(sakib.name, "sakib khursid hussain shaikh");
  sakib.age = 22.5;

  printf("The employee id : %d\n", e1.id);
  printf("The name of employee : %s\n", e1.name);
  printf("The age of e1 employee %f\n", e1.age);

  printf("The employee id : %d\n", moin.id);
  printf("The name of employee : %s\n", moin.name);
  printf("The age of e1 employee %f\n", moin.age);

  printf("The employee id : %d\n", suhana.id);
  printf("The name of employee : %s\n", suhana.name);
  printf("The age of e1 employee %f\n", suhana.age);

  printf("The employee id : %d\n", sakib.id);
  printf("The name of employee : %s\n", sakib.name);
  printf("The age of e1 employee %f\n", sakib.age);

  return 0;
}