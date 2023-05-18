#include<stdio.h>  
int main()    
{    

 int i,factorial=1,number;    

 printf("Enter a number: ");   
  scanf("%d",&number);  

if(number == 0)
{
    
  printf("Factorial of 0 is: 0");    
}
else
{

    for(i=1;i<=number;i++)
    {    
      factorial=factorial*i;    
    }    

  printf("Factorial of %d is: %d",number,factorial);    

}
return 0;  

}   