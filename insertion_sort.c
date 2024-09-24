#include <stdio.h>

int insertion_sort(int arr[], int len);

int main() {
    int arr[] = {4, 1, 2, 3, 7, 9, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, len);
    printf("Sorted array\n");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}

int insertion_sort(int arr[], int len) {
    for (int i = 1; i < len; i++) {
        int key = arr[i];
        int j = i - 1;

       
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
