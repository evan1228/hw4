#include <stdio.h>

void optimizedBubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        // 最後 i 個元素已經處於正確的位置
        for (int j = 0; j < n - i - 1; j++) {
            // 從 0 遍歷到 n-i-1
            // 如果找到的元素大於下一個元素，則交換它們
            if (arr[j] > arr[j + 1]) {
                // 交換 arr[j] 和 arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 4, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    optimizedBubbleSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

