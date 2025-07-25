// Left/Right Rotate an Array
// • Rotate all elements left or right by k positions.

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

    printf("Input array shift value: \n");
    scanf("%d", &k);
    count = k;

//loop through user array
    for (i = 0; i < n; i++) {
        if (i+k < n) {
        new[i+k] = old[i];
        }
        else {
            new[k-count] = old[i];
            count--;
        }
    }
    

    for (i = 0; i < n; i++) {
        printf("%d ", new[i]); //print elements in the new array
    }


    return 0;
}