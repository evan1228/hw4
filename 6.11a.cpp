#include <stdio.h>

void optimizedBubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        // �̫� i �Ӥ����w�g�B�󥿽T����m
        for (int j = 0; j < n - i - 1; j++) {
            // �q 0 �M���� n-i-1
            // �p�G��쪺�����j��U�@�Ӥ����A�h�洫����
            if (arr[j] > arr[j + 1]) {
                // �洫 arr[j] �M arr[j+1]
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

