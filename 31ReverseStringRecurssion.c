<<<<<<< HEAD
#include<stdio.h>
#include<string.h>


int main()
{
    char string[100],reversestring[100];
    int i,j=0,length;

    printf("Enter A String \n");
    gets(string);


    length = strlen(string);

    for (i = length-1; i >= 0; i--)
    {
        reversestring[j++] = string[i];
    }
    reversestring[i]= '\0';

    printf("The Reverse Result Is: %s",reversestring);

    return 0;
=======
#include<stdio.h>
#include<string.h>


int main()
{
    char string[100],reversestring[100];
    int i,j=0,length;

    printf("Enter A String \n");
    gets(string);


    length = strlen(string);

    for (i = length-1; i >= 0; i--)
    {
        reversestring[j++] = string[i];
    }
    reversestring[i]= '\0';

    printf("The Reverse Result Is: %s",reversestring);

    return 0;
>>>>>>> 46786bdec42832e1348a5b11c4aeb97046a63607
}