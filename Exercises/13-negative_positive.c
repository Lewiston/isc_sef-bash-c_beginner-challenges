// 13.Rearrange Array: Positive First, Negative Last
// • Move all positive numbers to the beginning, negatives to the end (in-place).


// Merge Two Sorted Arrays
// • Merge two already sorted arrays into a new sorted array.

// Check if Array is Palindromic
// • An array is palindromic if the order is the same forward and backward.


#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of your array one: ");
    scanf("%d", &n);

    int old[n];
    int positive[n];
    int neutral[n];
    int negative[n];
    int i, j, k, l;
    int new[n];

//Get array elements from user
    for (i = 0; i < n; i++) {
        printf("\nEnter an array[%d]: \n", i);
        scanf("%d", &old[i]);
    }

    
//loop through user array
    j = k = l = 0;

    for (i = 0; i < n; i++) {
        old[i] = positive[i];
        j++;
    }
    
    int x = 0;

    // for (i = 0; i < j; i++) {
    //     new[i] = positive[x];
    //     x++;
    // }

    // x = 0;
    // for (i = j; i < j + k; i++) {
    //     new[i] = neutral[x];
    //     x++;
    // }

    // x = 0;
    // for (i = j + k ; i < j + k + l; i++) {
    //     new[i] = negative[x];
    //     x++;
    // }



    for (i = 0; i < j; i++) {
        printf("%d ", positive[i]); //print elements in the new array
    }

    printf("\n");

    return 0;
}