#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minIndex = 0, maxIndex = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[minIndex])
            minIndex = i;

        if(arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    // Swap min and max elements
    swap(arr[minIndex], arr[maxIndex]);

    cout << "Array after swapping min and max elements:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}