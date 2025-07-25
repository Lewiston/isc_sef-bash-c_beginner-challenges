// Find the Frequency of Each Element
// • Count how many times each number appears in the array.

// Remove Duplicates from an Array
// • Create a new array that contains only unique elements.

#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of your array: ");
    scanf("%d", &n);

    int arr[n];
    int i, j, count;

//Get array elements from user
    for (i = 0; i < n; i++) {
        printf("\nEnter an array[%d]: \n", i);
        scanf("%d", &arr[i]);
    }
//loop through user array
    for (i = 0; i < n; i++) {
        count = 0; //counts number of dublictates
        for (j = 0; j < n; j++) { //loop back through previous elements within the array
            if (arr[i] == arr[j]){
                count++;
            }
        }
        printf("array[%d]: %d occurs %d times.\n", i, arr[i], count);
    }
        

    return 0;
}