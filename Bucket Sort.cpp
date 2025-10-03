//Abir Seth
//EnTC A1
//24070123003

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(float arr[], int size) {
    vector<float> buckets[size];

    for (int i = 0; i < size; i++) {
        int index = size * arr[i];
        buckets[index].push_back(arr[i]);
    }

    for (int i = 0; i < size; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    int k = 0;
    for (int i = 0; i < size; i++) {
        for (float val : buckets[i]) {
            arr[k++] = val;
        }
    }
}

int main() {
    float arr[] = {0.42, 0.32, 0.23, 0.52, 0.25, 0.47, 0.51};
    int size = sizeof(arr) / sizeof(arr[0]);

    bucketSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}

Sorted array: 0.23 0.25 0.32 0.42 0.47 0.51 0.52 

=== Code Execution Successful ===
