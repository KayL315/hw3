/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// Function to perform a binary search on the sorted array
int binarySearch(int array[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (array[mid] == target) {
            return mid;
        }
        else if (array[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    
    return -1;
}

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform selection sort on the array
void selectionSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        
        if (minIndex != i) {
            swap(&array[i], &array[minIndex]);
        }
    }
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
    
    // Input target
    printf("Input target: ");
    scanf("%d", &target);
    
    // Print the original array and target
    printf("\nThe array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\nThe target:\n%d\n", target);
    
    // Sort the array using selection sort
    selectionSort(array, size);
    
    // Perform binary search on the sorted array
    int position = binarySearch(array, size, target);
    
    // Print search result
    printf("\nSearch result:\n");
    if (position != -1) {
        printf("%d\n", position);
    } else {
        printf("-1\n");
    }
    
    return 0;
}
