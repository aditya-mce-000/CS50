#include <stdio.h>

int search(int n, int arr[], int size);

int main() {
    int arr[] = {12, 20, 30, 45, 50, 60, 75, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (search(20, arr, size)) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    }

    return 0;
}

int search(int n, int arr[], int size) {
    if (size <= 0) return 0; // Target not found

    int mid = (size - 1) / 2;

    if (arr[mid] == n) {
        // printf("Found at %d", mid);
        return 1; // Found
    } 
    else if (n < arr[mid]) {
        // Search left half (first 'mid' elements)
        return search(n, arr, mid);
    } 
    else {
        // Search right half (elements after 'mid')
        return search(n, arr + mid + 1, size - mid - 1);
    }
}