#include <stdio.h>

int selection_sorting(int arr[], int size);

int main(){
    int arr[] = {3, 5, 1, 2, 7, 6, 9, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    selection_sorting(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

int selection_sorting(int arr[], int size) {
    int i, j, min_i;
    
    for (i = 0; i < size - 1; i++) {
        min_i = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_i]) {
                min_i = j;
            }
        }
        if (min_i != i) {
            int temp = arr[min_i];
            arr[min_i] = arr[i];
            arr[i] = temp;
        }
    }
    return 0;
}
