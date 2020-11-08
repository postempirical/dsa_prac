#include <iostream>

using namespace std;

int main()
{
    int arr[] = {6,2,4,64,3,98,124,2,-4,78};
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "original array: " << endl;
    for (int i = 0; i < len; i++) 
        cout << arr[i] << " ";

    cout << endl;

    int min = arr[0], max = arr[0];

    for (int i = 0; i < len; i++) 
    {
        if (arr[i] < min) 
            min = arr[i];
        else if (arr[i] > max) 
            max = arr[i];
    }

    cout << "min: " << min << endl;
    cout << "max: " << max << endl;
    return 0;
}
