#include <stdio.h>

int findMax(int arr[], int n)
 {
    int max = arr[0];

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() 
{
    int arr[] = {5, 10, 15, 20, 25};

    int n = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, n);

    printf("The maximum number in the array is %d\n", max);

    return 0;
}