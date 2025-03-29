#include <stdio.h>
#include <string.h>

// Function to perform insertion sort on a 2D array of strings
void insertionSort(char arr[][100], int n) {
    char temp[100];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent strings using strcmp
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Swap strings using strcpy
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

// Function to print the array of strings
void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s \n", arr[i]);
    }
    printf("\n");
}