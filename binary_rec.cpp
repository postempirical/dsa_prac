#include <iostream>

using namespace std;

int recBin(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = (low+high)/2;
        if (arr[mid] == key) return mid;
        else if (key < arr[mid]) return recBin(arr, low, mid-1, key);
        else return recBin(arr, mid+1, high, key);
    }

    return -1;
}

int main() {
    int arr[] = {2,4,6,13,15,17,24,26};
    int len = 8;
    int key = 13;
    int low = 0, high = len;

    int res = recBin(arr, low, high, key);

    (res == -1) ? cout << "Element is not present in array" << endl : cout << "Element is present at index: " << res << endl;

    return 0;
}
