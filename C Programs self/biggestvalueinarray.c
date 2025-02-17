// // #include <stdio.h>
// // int main()
// // {
// //     int arr[5], j, m, k;

// //     for (m = 0; m < 5; m++)
// //     {
// //         printf("Enter your number :");
// //         scanf("%d", &arr[m]);
// //     }
// //     k=arr[0];
// //     for(m=1;m<5;m++)
// //     {
// //        if(arr[m]>k)
// //        {
// //         k=arr[m];
// //        }

// //     }
// //     printf("Your Biggest Value id : %d",k);
// // }
// #include <stdio.h>

// int main(void) {
// int i,max,N,x;
// 	printf("Enter N : ");
// 	scanf("%d",&N);
// 	max=0;
// 	for(i=1;i<=N;i++)
// 	{
// 		printf("Enter x-%d : ",i);
// 		scanf("%d",&x);

// 		if(max<x)
// 			max = x;
// 	}
// 	printf("\n max = %d",max);

// }
#include <stdio.h>

int main()
{
    int num, large = 0, rem = 0;

    /* get the input from the user */
    printf("Enter your input value:");
    scanf("%d", &num);

    /* finding the largest digit of the given input */
    while (num > 0)
    {
        rem = num % 10;

        if (rem > large)
        {
            large = rem;
        }

        num = num / 10;
    }

    /* print the largest digit of the number */
    printf("Largest digit of the number is %d\n", large);
}