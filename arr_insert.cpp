#include <iostream>

using namespace std;

void insert(int arr[], int pos, int item, int n) {
    for (int i = n; i > pos; i--) {
        arr[i] =  arr[i-1];
    }
    arr[pos] = item;

    for (int i = 0; i < n+1; i++) {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {23,12,43,64,11,2};
    int n = 6;
    int pos = 3;
    int item = 100;

    cout << "original array : " << endl;
    for (int i = 0; i < n; i++) 
        cout << arr[i] << endl;

    cout << "array after insertion : " << endl;
    insert(arr, pos, item, n);

    return 0;
    
}