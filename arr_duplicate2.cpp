#include <iostream>

using namespace std;

int main()
{
    int arr[] = {2,3,3,5,6,6,6,7,9,9,100};
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "original array: " << endl;
    for (int i = 0; i < len; i++) 
        cout << arr[i] << " ";

    cout << endl;
    
    for (int i = 0; i < len-1; i++) {
        if (arr[i] == arr[i+1])
        {
            int j = i+1;
            while (arr[j] == arr[i]) j++;
            cout << arr[i] << " appears " << j-i << " times " << endl;
            i=j-1;
        }       
    }
    
    return 0;
}
