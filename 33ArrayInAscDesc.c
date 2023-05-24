<<<<<<< HEAD
#include <stdio.h>

void main ()
{
   int num[20],num2[20];
   int i, j, a, n,k;

   printf("enter number of elements in an array 1:");
   scanf("%d", &n);

   printf("enter number of elements in an array 2:");
   scanf("%d", &k);

   printf("Enter the elements for array 1: \n");

   for (i = 0; i < n; ++i)
   {
      scanf("%d", &num[i]);
   }
   
   printf("Enter the elements for array 2: \n");

   for (i = 0; i < k; ++i)
   {
      scanf("%d", &num2[i]);
   }


   for (i = 0; i < n; ++i)
   {
      for (j = i + 1; j < n; ++j)
      {
         if (num[i] > num[j])
         {
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
 
   for (i = 0; i < k; ++i)
   {
      for (j = i + 1; j < k; ++j)
      {
         if (num2[i] > num2[j])
         {
            a = num2[i];
            num2[i] = num2[j];
            num2[j] = a;
         }
      }
   }

   printf("The numbers in descending order is: \n");
   
   for (i = n-1; i >= 0; i--)
   {
      printf("\n %d", num[i]);
   }

   printf("\nThe numbers in ascending order is: \n");
   
  for (i = 0; i < k; ++i)
  {
            printf("%d\n", num2[i]);
  }

=======
#include <stdio.h>
void main (){
   int num[20];
   int i, j, a, n;
   printf("enter number of elements in an array:");
   scanf("%d", &n);
   printf("Enter the elements: \n");
   for (i = 0; i < n; ++i)
   {
      scanf("%d", &num[i]);
   }

   for (i = 0; i < n; ++i){
      for (j = i + 1; j < n; ++j){
         if (num[i] > num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("The numbers in ascending order is:");
   for (i = n; i > 0; --i){
      printf("\n %d", num[i]);
   }
>>>>>>> 46786bdec42832e1348a5b11c4aeb97046a63607
}