//Abir Seth
//ENTC A1
//PRN-24070123003

#include <iostream>
#include <algorithm> 
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int main() {
    int arr[] = {56, 1, 69, 2, 28};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size);

    for (int x : arr) cout << x << " ";
}


1 2 28 56 69 

=== Code Execution Successful ===
