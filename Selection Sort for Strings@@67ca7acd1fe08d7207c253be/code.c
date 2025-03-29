#include <stdio.h>
#include <string.h>

void selectionSort(char arr[][20], int n) {
    char temp[20];  // Ensure temp can hold strings of up to 20 characters
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {  // Compare strings lexicographically
                strcpy(temp, arr[j]);             // Swap the strings
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

void printArray(char arr[][20], int n) {
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);