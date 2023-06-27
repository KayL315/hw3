/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// Convert to binary
int convertToBinary(int num) {
    int binary = 0, base = 1;
    while (num > 0) {
        binary += (num % 2) * base;
        num /= 2;
        base *= 10;
    }
    return binary;
}

int convertToInteger(int binary) {
    int decimal = 0, base = 1;
    while (binary > 0) {
        decimal += (binary % 10) * base;
        binary /= 10;
        base *= 2;
    }
    return decimal;
}

// Linear search
int linearSearch(int array[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size;
    
    // Input array size
    printf("Input array size: ");
    scanf("%d", &size);
    
    int array[size];
    
    // Input elements of the array
    printf("Input elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    
    int target;
    
    // Input target number
    printf("Input target: ");
    scanf("%d", &target);
    
    // Print the original array and target
    printf("\nThe array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\nThe target:\n%d\n", target);
    
    // Convert to binary
    int convertedArray[size];
    int convertedTarget;
    
    printf("\nConverted array:\n");
    for (int i = 0; i < size; i++) {
        convertedArray[i] = convertToBinary(array[i]);
        printf("%d ", convertedArray[i]);
    }
    convertedTarget = convertToBinary(target);
    printf("\n\nConverted target:\n%d\n", convertedTarget);
    
    // Linear search
    int position = linearSearch(convertedArray, size, convertedTarget);
    
    // Print result
    printf("\nSearch result:\n");
    printf("%d\n", position);
    
    // Convert to original form
    for (int i = 0; i < size; i++) {
        array[i] = convertToInteger(convertedArray[i]);
    }
    target = convertToInteger(convertedTarget);
    
    // Print the original array and target
    printf("\nOriginal array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\nOriginal target:\n%d\n", target);
    
    return 0;
}
