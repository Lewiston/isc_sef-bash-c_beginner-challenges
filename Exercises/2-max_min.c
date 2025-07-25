// Find Maximum and Minimum
// • Given an array of integers, find the largest and smallest element.

#include <stdio.h>

    int n, max, min, i;

int main(){

    printf("Enter the size of your array: ");
    scanf("%d", &n);

    int array[n];


    for (i = 0; i < n; i++) {
        printf("\nEnter an array[%d]: \n", i);
        scanf("%d", &array[i]);
    }
    
    min = max = array[0];

    for (i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }

        if (array[i] < min) {
            min = array[i];
        }
    
    }

    printf("The largest and smallest elements are %d and %d respectively.\n", max, min);
    return 0;
}