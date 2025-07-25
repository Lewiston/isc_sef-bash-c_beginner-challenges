#include <stdio.h>


// • Read N integers into an array and print them in the same order.

int main(){
    int n;
    printf("Enter the size of your array: ");
    scanf("%d", &n);

    int array[n];
    int i;


    for (i = 0; i < n; i++) {
        printf("\nEnter an array[%d]: \n", i);
        scanf("%d", &array[i]);
    }

    printf("The array elements are: {");
    for (i = 0; i < (n - 1); i++) {
        printf("%d, ", array[i]);
    
    }

    printf("%d}\n", array[n-1]);
    return 0;
}