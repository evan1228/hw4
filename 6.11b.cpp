#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        bool swapped = false; 

        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

    
        if (!swapped) {
            cout << "Array is already sorted. No more passes needed." << endl;
            return;
        }
    }
}

int main() {
    int arr[5];

    
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i=0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
