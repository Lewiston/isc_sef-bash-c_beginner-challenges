// Compute the sum and average of elements in an array.

// Find Maximum and Minimum
// • Given an array of integers, find the largest and smallest element.

#include <stdio.h>

    int n, sum;

int main(){

    printf("Enter the size of your array: ");
    scanf("%d", &n);

    int array[n];
    int i;


    for (i = 0; i < n; i++) {
        printf("\nEnter an array[%d]: \n", i);
        scanf("%d", &array[i]);
    }
    sum = 0;

    for (i = 0; i < n; i++) {
        sum += array[i];    
    }

    printf("The sum of array elements is %d.\n", sum);
    return 0;
}

