// Merge Two Sorted Arrays
// • Merge two already sorted arrays into a new sorted array.

// Check if Array is Palindromic
// • An array is palindromic if the order is the same forward and backward.


#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of your array one: ");
    scanf("%d", &n);

    int old1[n];
    int i, j, k, count;
    int new[100];

//Get array elements from user
    for (i = 0; i < n; i++) {
        printf("\nEnter an array[%d]: \n", i);
        scanf("%d", &old1[i]);
    }

    
    printf("\nEnter the size of your array two: ");
    scanf("%d", &k);

    int old2[k];

    for (i = 0; i < k; i++) {
        printf("\nEnter an array[%d]: \n", i);
        scanf("%d", &old2[i]);
    }

//loop through user array
    count = 0;
    for (i = 0; i < n; i++) {
        new[i] = old1[i];
        count++;
    }
    
    int x = 0;
    for (i = count; i < count + k; i++) {
        new[i] = old2[x];
        x++;
    }

    for (i = 0; i < n + k; i++) {
        printf("%d ", new[i]); //print elements in the new array
    }



    return 0;
}