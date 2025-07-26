/* write a program for a simple calculator that performs the following:
- Addition of n integers
- Subtraction of 2 integers
- Multiplication of n integers
- Division of 2 floats
- Square of an integer
- Cube of an integer
- Remainder of a division */

#include <stdio.h>
#include <math.h>

// Declarations of functions to be used
int add(int n);
int subtract(int x, int y);
int multiply(int n);
float divide(int x, int y);
int square(int n);
int cube(int n);
int remain(int x, int y);
float average(int n);

int option, n, x, y; // Declarations of variables need to determine user choices and parameters for the different functions

// Start of the main function
int main() {

        // Welcome message and a description of our program
        printf("\nWelcome to our Simple Calculator 🧮🖩\n\n");
        printf("Here is a list of things our calculator can do.\nKey in a number based on the list below to get started.\n");
        printf("1. Addition of n integers.\n");
        printf("2. Subtraction of 2 integers.\n");
        printf("3. Mulitplication of n integers.\n");
        printf("4. Division of 2 integers.\n");
        printf("5. Square of an integer.\n");
        printf("6. Cube of an integer.\n");
        printf("7. Remainder of a division.\n");
        printf("8. Average of n numbers.\n");
        printf("0. Quit.\n\n");
        
        scanf("%d", &option); // Records the option selected by the user

        // Base on the user option selected, the case is handled differently
        switch(option) {

            case 0:
                printf("\nThank you for using our Simple Calculator.\n");
                break;

            case 1: // User selects the add function
                printf("\nHow many numbers do you want to add: ");
                scanf("%d", &n); // Collects the number of elements use plans to add
                add(n); // Triggers the add function
            break;

            case 2: // User selects the subtract funtion
                printf("\nEnter the first number: ");
                scanf("%d", &x);
                printf("\nEnter the second number: ");
                scanf("%d", &y);
                subtract(x, y); // Collects both numbers user plans to use for this operation and triggers the subtract function
            break;

            case 3: // User selects the multiply function
                printf("\nHow many numbers do you want to multiply: "); 
                scanf("%d", &n); // Collects the number of elements use plans to multiply
                multiply(n); // Triggers the multiple option
            break;

            case 4: // User selects the divide funtion
                printf("\nEnter the first number: ");
                scanf("%d", &x);
                printf("\nEnter the second number: ");
                scanf("%d", &y);
                divide(x, y); // Collects both numbers user plans to use for this operation and triggers the divide function
            break;

            case 5: // User selects the square funtion
                printf("\nEnter a number to calculate its square: ");
                scanf("%d", &n); // Collects the number user wants the square for
                square(n); // Triggers the square function
            break;

            case 6: // User selects the cube funtion
                printf("\nEnter a number to calculate its cube: ");
                scanf("%d", &n); // Collects the number user wants the cube for
                cube(n); // Triggers the cube function
            break;

            case 7: // User selects the remainder funtion
                printf("\nEnter the first number: ");
                scanf("%d", &x);
                printf("\nEnter the second number: ");
                scanf("%d", &y);
                remain(x, y); // Collects both numbers user plans to use for this operation and triggers the remainder function
            break;

            case 8: // User selects the average function
                printf("\nHow many numbers do you want to find the average of: ");
                scanf("%d", &n); // Collects the number of elements use plans to get the average of
                average(n); // Triggers the average function
            break;


            default: // In case user selects an option that is not on the list
                printf("\nPlease enter a valid option\n");
                main();
                break;

    }


    return 0;
}
// End of main function

// Function definitions

// Start of add function
int add(int n) {
    int arr[n]; // Declares an array of size n
    int sum, i; // Decalaration of a counter i and a variable to hold the sum, sum.

    // Enter elements of the array of size n
    for (i = 0; i < n; i++) {
        printf("\nEnter the number %d\n", i);
        scanf("%d", &arr[i]);
    }

    sum = 0; // Initialize sum to 0
    for (i = 0; i < n; i++) {
        sum += arr[i]; // Calculates the sum
    }

    printf("\nThe sum➕ of all the numbers is: %d\n", sum); // Print the sum

    return sum;
}
// End of add function

// Start of subtract function
int subtract(int x, int y) {
    int diff; //Declare a variable, diff, to hold the value of the difference of both numbers
    diff = x - y; // Define diff
    printf("\nThe difference➖ between %d and %d is: %d\n", x, y, diff); // Print the difference of both numbers
    return diff;
}
// End of subtract function

// Start of multiply function
int multiply(int n) {
    int arr[n]; // Declares an array of size n
    int pdt, i; // Decalaration of a counter i and a variable to hold the product, pdt.

    // Enter elements of the array of size n
    for (i = 0; i < n; i++) {
        printf("\nEnter the number %d\n", i);
        scanf("%d", &arr[i]);
    }

    pdt = 1; // Initialize pdt to 1
    for (i = 0; i < n; i++) {
        pdt *= arr[i]; // Calculates the product
    }

    printf("\nThe product✖️ of all the numbers is: %d\n", pdt); // Print the product
    return pdt;
}
// End of multiply function

// Start of divide function
float divide(int x, int y) {
    float div; //Declare a variable, div, to hold the value of the division of both numbers
    div = x / y; // Define div
    printf("\nThe division➗ between %d and %d is: %.3f\n", x, y, div); // Print the result of the division of both numbers to 3 decimal places
    return div;
}
// End of divide function

// Start of square function
int square(int n) {
    int sqr; // Declare a variable, sqr, to hold the value of the square of the number n
    sqr = n * n; // Define sqr
    printf("\nThe square🟦 of %d is: %d\n", n, sqr); // Print the square of the number n
    return sqr;
}
// End of square function

// Start of cube function
int cube(int n) {
    int cube; // Declare a variable, cube, to hold the value of the cube of the number n
    cube = n * n * n; // Define cube
    printf("\nThe cube🧊 of %d is: %d\n", n, cube); // Print the cube of the number n
    return cube;
}
// End of cube function

// Start of remainder function
int remain(int x, int y) {
    int mod; // Declare a variable, mod, to hold the value remainder after division 
    mod = x % y; // Define mod
    printf("\nThe remainder🌒 of the division between %d and %d is: %d\n", x, y, mod); // Print the remainder after division
    return mod;
}
// End of remainder function

// Start of the average function
float average(int n) {
    int arr[n]; // Declares an array of size n
    int sum, i; // Decalaration of a counter i and a variable to hold the sum, sum.
    float avg; // Declare a variable, avg, to hold the value of the average of the numbers

    // Enter elements of the array of size n
    for (i = 0; i < n; i++) {
        printf("\nEnter the number %d\n", i);
        scanf("%d", &arr[i]);
    }

    sum = 0; // Initialize the sum to 0
    for (i = 0; i < n; i++) {
        sum += arr[i]; // Calculate the sum
    }

    avg = sum / n; // Define avg

    printf("\nThe average⚖️ of all the numbers is: %.3f\n", avg); // Print the average to 3 decimal places
    return avg;
}
// End of the average function