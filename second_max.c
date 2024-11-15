#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 4, 7, 9, 8, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    int i;
    int max = arr[0];
    int second_max = -1;

    for (i = 1; i < len; i++) {
        if (arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if (arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }

    printf("%d, %d\n", second_max, max);

    return 0;
}