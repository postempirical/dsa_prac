#include <iostream>

using namespace std;

//anti-clockwise totation
int main()
{
    int arr[] = {23,12,43,64,11,2};
    int len = sizeof(arr) / sizeof(arr[0]);
    int k = 2; // number of rotations
    int temp;

    cout << "original array: " << endl;
    for (int i = 0; i < len; i++) 
        cout << arr[i] << " ";

    cout << endl;

    for (int i = 0; i < k; i++) {
        temp = arr[len-1];
        for (int j = len-2; j >= 0; j--) {
            arr[j+1] = arr[j];
        }
        arr[0] = temp;
    }

    cout << "rotated array: " << endl;

    for (int i = 0; i < len; i++) 
        cout << arr[i] << " ";

    return 0;
}