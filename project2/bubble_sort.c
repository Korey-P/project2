#include <stdio.h>

const int MAX = 9;

// Function prototypes
void printValues(int *array);
void sort(int *array);
void swap(int *a, int *b);

int main() {
    // Initial array of integers
    int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

    // Print array before sorting
    printf("Before: \n");
    printValues(values);

    // Test the swap function
    int x = 3, y = 5;
    printf("x: %d, y: %d\n", x, y);
    swap(&x, &y);
    printf("x: %d, y: %d\n", x, y);

    // Perform bubble sort
    sort(values);

    // Print array after sorting
    printf("After: \n");
    printValues(values);

    return 0;
}

// Prints the array elements in a single line
void printValues(int *array) {
    printf("[");
    for (int i = 0; i < MAX; i++) {
        printf("%d ", array[i]);
    }
    printf("]\n");
}

// Swaps two integers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble sort algorithm with debug output
void sort(int *array) {
    for (int i = 0; i < MAX - 1; i++) {
        for (int j = 0; j < MAX - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
                printValues(array); // Print array after every swap
            }
        }
    }
}
