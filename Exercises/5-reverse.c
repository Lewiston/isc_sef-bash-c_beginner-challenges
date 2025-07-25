// Print the array in reverse order.

#include <stdio.h>


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

    printf("The array elements in reverse are: {");
    for (i = n-1; i > 0; i--) {
        printf("%d, ", array[i]);
    
    }

    printf("%d}\n", array[0]);
    return 0;
}