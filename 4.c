#include <stdio.h>

void changeMin(int arr[], int n) {
    if (n < 2) {
        return;
    }

    int min1 = arr[0];
    int min2 = arr[1];

    for (int i = 2; i < n; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }


    int min1_ind = -1;
    int min2_ind = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == min1) {
            min1_ind = i;
        } else if (arr[i] == min2) {
            min2_ind = i;
        }
    }

    int temp = arr[min1_ind];
    arr[min1_ind] = arr[min2_ind];
    arr[min2_ind] = temp;
}

int main() {
    int arr[] = {3, 2, 1, 4, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    changeMin(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
