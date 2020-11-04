#include <iostream>

using namespace std;

int find(int arr[], int n, int key);

int del(int arr[], int n, int key) {
    int pos = find(arr, n, key);
    if (pos == -1) {
        cout << "element not found" << endl;
        return -1;
    }

    for (int i = pos; i < n-1; i++) {
        arr[i] =  arr[i+1];
    }

    return n-1;
}

int find(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) 
        if ( arr[i] == key) return i;
    return -1;
}

int main()
{
    int arr[] = {23,12,43,64,11,2};
    int n = 6;
    int key = 64;

    cout << "original array : " << endl;
    for (int i = 0; i < n; i++) 
        cout << arr[i] << endl;

    n = del(arr, n, key);

    cout << "array after deletion : " << endl;

    for (int i = 0; i < n; i++) 
        cout << arr[i] << endl;

    return 0;
    
}