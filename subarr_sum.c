#include <stdio.h>

int main() {
    int arr[] = {15, 2, 4, 8, 9, 5, 10, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target_sum = 23;

    int res_start = -1, res_end = -1;
    int found = 0;

    for (int i = 0; i < n; i++) {
        int current_sum = arr[i];

        if (current_sum == target_sum) {
            res_start = res_end = i + 1;
            found = 1;
            break;
        }

        for (int j = i + 1; j < n; j++) {
            current_sum += arr[j];

            if (current_sum == target_sum) {
                res_start = i + 1;
                res_end = j + 1;
                found = 1;
                break;
            }
        }

        if (found) break;
    }

    if (found) {
        printf("%d %d\n", res_start, res_end);
    } else {
        printf("-1\n");
    }

    return 0;
}
