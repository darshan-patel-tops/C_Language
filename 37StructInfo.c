#include <stdio.h>

struct employee 
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main()
{
    struct employee employee;

    printf("Enter employee number: ");
    scanf("%d", &employee.empno);

    printf("Enter employee name: ");
    scanf("%s", employee.empname);

    printf("Enter employee address: ");
    scanf("%s", employee.address);

    printf("Enter employee age: ");
    scanf("%d", &employee.age);

    printf("\nEmployee Number: %d\n", employee.empno);
    printf("\nEmployee Name: %s\n", employee.empname);
    printf("\nEmployee Address: %s\n", employee.address);
    printf("\nEmployee Age: %d\n", employee.age);

    return 0;
}