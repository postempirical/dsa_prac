#include <iostream>

using namespace std;

int main()
{
    int arr[] = {2,3,3,5,6,6,6,7,9,9,100};
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "original array: " << endl;
    for (int i = 0; i < len; i++) 
        cout << arr[i] << " ";

    int duplicate = 0;
    
    cout << endl << "duplicates in the array: " << endl;

    for (int i = 0; i < len; i++) {
        if (arr[i] == arr[i+1] && arr[i] != duplicate)
        {
            duplicate = arr[i];
            cout << arr[i] << " ";
        }       
    }
    cout << endl;
    
    return 0;
}