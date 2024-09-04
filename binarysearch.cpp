#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int key) {
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2; 
        if (key > arr[mid]) {
            low = mid + 1;
        } else if (key < arr[mid]) {
            high = mid - 1;
        } else {
            return mid; 
        }
    }
    return -1; 
}

int main() {
    int n;
    cout << "Enter the size :" << endl;
    cin >> n;
    vector<int> arr(n); 
    cout << "KINDLY PROVIDE THE LIST OR ARRAY IN SORTED ASCENDING ORDER" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter the element:" << endl;
        cin >> arr[i];
    }
    int key;
    cout << "Enter the element you want to find :" << endl;
    cin >> key;
    
    int result = binarySearch(arr, key);
    if (result != -1) {
        cout << "Element found at index " << result << " with value " << arr[result] << "!" << endl;
    } else {
        cout << "Element not found!!" << endl;
    }
    return 0;
}
