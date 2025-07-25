// Count Even and Odd Numbers

// Find Maximum and Minimum
// • Given an array of integers, find the largest and smallest element.

#include <stdio.h>

    int n, even, odd;

int main(){

    printf("Enter the size of your array: ");
    scanf("%d", &n);

    int array[n];
    int i;


    for (i = 0; i < n; i++) {
        printf("\nEnter an array[%d]: \n", i);
        scanf("%d", &array[i]);
    }
    odd = even = 0;

    for (i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            even++;
        }

        else {
            odd++;
        }
    
    }

    printf("There are %d even numbers and %d odd numbers.\n", even, odd);
    return 0;
}