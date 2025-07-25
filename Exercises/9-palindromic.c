// Check if Array is Palindromic
// • An array is palindromic if the order is the same forward and backward.


#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of your array: ");
    scanf("%d", &n);

    int old[n];
    int i, j, k, count;
    int new[n];

//Get array elements from user
    for (i = 0; i < n; i++) {
        printf("\nEnter an array[%d]: \n", i);
        scanf("%d", &old[i]);
    }

    count = k = 0;

//loop through user array
    for (i = n-1; i >= 0; i--) {
        new[k] = old[i];
        k++;
    }
    

    for (i = 0; i < n; i++) {
        if (old[i] == new[i])
        count++;
    }

    if (count == n) {
        printf("The array is a palindrum\n");
    }

    else {
        printf("The array is not a palindrum\n");
    }


    return 0;
}