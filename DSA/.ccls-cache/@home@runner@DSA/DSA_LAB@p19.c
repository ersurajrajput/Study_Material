// write a c program to implement selection sort, quic sort 
#include <stdio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array before sorting: \n");
    for (int i=0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    quickSort(arr, 0, n - 1);
    printf("Sorted array using quick sort: \n");
    for (int i=0; i < n; i++){
        printf("%d ", arr[i]);
    }
    selectionSort(arr, n);
    printf("\n\n");
    printf("Sorted array using selection sort: \n");
    for (int i=0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
