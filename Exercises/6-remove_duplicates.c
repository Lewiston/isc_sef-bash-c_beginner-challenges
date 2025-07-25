// Remove Duplicates from an Array
// • Create a new array that contains only unique elements.

#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of your array: ");
    scanf("%d", &n);

    int old[n];
    int i, j, k, count;
    int new[n];
    k = 0;

//Get array elements from user
    for (i = 0; i < n; i++) {
        printf("\nEnter an array[%d]: \n", i);
        scanf("%d", &old[i]);
    }
//loop through user array
    for (i = 0; i < n; i++) {
        count = 0; //counts number of dublictates
        for (j = 0; j < i; j++) { //loop back through previous elements within the array
            if (old[i] == old[j]){
                count++;
            }
        }
        
        if (count == 0) { //if no duplicates, add to new array
        new[k] = old[i];
        k++; // increment to the next index value of the new array
        }
    }

    for (i = 0; i < k; i++) {
        printf("%d ", new[i]); //print elements in the new array
    }


    return 0;
}