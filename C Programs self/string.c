// #include <stdio.h>
// int main()
// {
//   char moin[20];     
//   fgets(moin,20,stdin);
//   printf("%s",moin);

//   // fgates a gets karta vadhare safe chhe ane ama apde jetla ni string banavi hase 
//   // tetlaj char print karse 
//   // and ana thi apdu software pan safe rahese
  

// }
// // {

// //   char moin[10];

// //   gets(moin);  // gets ma space pachhi nu pan print thay chhe etle ano use karay chhe  
// //                // user pase thi emput leva mate pan a safe nathi kem ke amam apde 10 size ni
// //               // string hova chhata pan vadhare word print thay chhe
//                  // ano use karvathi apdu software kharab thavano bik rahe chhe
// //   printf(" entered your char = is %s", moin);

// // }
// // {
// //   char suhana[10]="moinuddin";
// //   int m;
// //   for(m=0;suhana[m];m++); // for loop ma semi colum no means forloop ma teni body nathi
// //   printf("%d",m);    // etle ano use apde string ni lenght jadva mate karisu
// // }
// // {
// //   char suhana[10]="moinuddin";
// //   int m;
// //   for(m=0;suhana[m];m++)
// //   {
// //     printf("%c",suhana[m]);
// //   }

// // }
// // {
// //   char suhana[10]="moinuddin";

// //   printf("%s",suhana); // khali string print karavvi hoy to avi ritna thay
// // }
#include <stdio.h>
#include <string.h>
int main()
{
  char str[23];
  int m;
  fgets(str,23,stdin);
  //printf("You enteres :%s",str)
  
  for(m=0;str[m];m++);
  printf("%d",m);
  printf("%s",str);

  
  
    
}