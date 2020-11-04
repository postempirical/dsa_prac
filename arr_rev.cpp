#include <iostream>

using namespace std;

int main()
{
    int arr[] = {23,12,43,64,11,2};
    int len = sizeof(arr) / sizeof(arr[0]);
    int temp;

    cout << "original array: " << endl;
    for (int i = 0; i < len; i++) 
        cout << arr[i] << " ";

    cout << endl;

    for (int i = 0, j = len-1; i < j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    cout << "reversed array: " << endl;

    for (int i = 0; i < len; i++) 
        cout << arr[i] << " ";

    return 0;
}