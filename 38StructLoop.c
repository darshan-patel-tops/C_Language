#include <stdio.h>

struct employee 
{
    int employee_no;
    char employee_name[50];
    char address[100];
    int age;
};

int main()
{
    struct employee employee[5];

    for(int i=0; i<5; i++) 
    {
        printf("Enter employee %d number: ", i+1);
        scanf("%d", &employee[i].employee_no);

        printf("Enter employee %d name: ", i+1);
        scanf("%s", employee[i].employee_name);

        printf("Enter employee %d address: ", i+1);
        scanf("%s", employee[i].address);

        printf("Enter employee %d age: ", i+1);
        scanf("%d", &employee[i].age);
    }

    printf("\nEmployee Details:\n");
    
    for(int i=0; i<5; i++) 
    {
        printf("------------------------\n");
        
        printf("Employee %d Number: %d\n", i+1, employee[i].employee_no);
        printf("Employee %d Name: %s\n", i+1, employee[i].employee_name);
        printf("Employee %d Address: %s\n", i+1, employee[i].address);
        printf("Employee %d Age: %d\n", i+1, employee[i].age);
        
    }

    return 0;
}