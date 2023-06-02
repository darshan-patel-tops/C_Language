#include<stdio.h>

int main()
{
    int arr[10], total_even=0,total_odd=0,sum_even=0,sum_odd=0;
    int i;

    printf("Enter Numbers: \n");

    for (i = 0; i <10 ; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] %2 == 0)
        {
            total_even++;
            sum_even += arr[i];
        }
        else
        {
            total_odd++;
            sum_odd += arr[i];
        }
    }
      
	  printf("Total Even Numbers Are: %d\n", total_even);
      printf("Sum Of Even Numbers Is: %d\n", sum_even);
      printf("Total Odd Numbers Are: %d\n", total_odd);
      printf("Sum Of Odd Numbers Is: %d\n", sum_odd);
      
      
      
    return 0;
    
}