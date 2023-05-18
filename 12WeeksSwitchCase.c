#include <stdio.h>

int main() {

    int day;

    printf("Enter a number between 1 And 7: ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
            break;

        case 3:
            printf("Wednesday");
            break;

        case 4:
            printf("Thursday");
            break;

        case 5:
            printf("Friday");
            break;

        case 6:
            printf("Saturday");
            break;

        case 7:
            printf("Sunday");
            break;

        default:
            printf("Enter Number Between 1 And 7 Only");
    }

    return 0;
}