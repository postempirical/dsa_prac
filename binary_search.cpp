#include <iostream>

using namespace std;

int bin(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = (low+high)/2;
        if (arr[mid] == key) return mid;
        else if (key < arr[mid]) high = mid-1;
        else low = mid+1;
    }

    return -1;
}

int main() {
    int arr[] = {2,4,6,13,15,17,24,26};
    int len = 8;
    int key = 17;
    int low = 0, high = len;

    int res = bin(arr, low, high, key);

    (res == -1) ? cout << "Element is not present in array" << endl : cout << "Element is present at index: " << res << endl;

    return 0;
}
