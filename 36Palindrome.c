#include <stdio.h>
#include <string.h>

int main()
{
   char string1[100];
   int i, length;
   int point = 0;

   printf("Enter a string: ");
   scanf("%s", string1);

   length = strlen(string1);

   for(i=0;i < length ;i++)
   {
      if(string1[i] != string1[length-i-1])
      {
         point = 1;
         break;
      }
   }

   if (point == 1) 
   {
      printf("%s is not a palindrome", string1);
   }    
   
   else 
   {
      printf("%s is a palindrome", string1);
   }
   
   return 0;
}