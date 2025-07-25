// 11.Second Largest Element
// • Find the second largest number in the array without sorting.

// Find Maximum and Minimum
// • Given an array of integers, find the largest and smallest element.

#include <stdio.h>

    int n, max, s_max, i;

int main(){

    printf("Enter the size of your array: ");
    scanf("%d", &n);

    int array[n];


    for (i = 0; i < n; i++) {
        printf("\nEnter an array[%d]: \n", i);
        scanf("%d", &array[i]);
    }
    
    s_max = max = array[0];

    for (i = 1; i < n; i++) {
        if (array[i] > max) {
            s_max = max;
            max = array[i];
        }
        
    }

    printf("The second largest element is %d.\n", s_max);
    return 0;
}