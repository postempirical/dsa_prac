#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1,3,4,5,6,7,8,10,12,14};
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "original array: " << endl;
    for (int i = 0; i < len; i++) 
        cout << arr[i] << " ";

    cout << endl;

    int k = 10;
    cout << "element pairs for value 10: " << endl;
    
    int i = 0, j = len-2;

    while (i<j) 
    {
        if (arr[i] + arr[j] == k) 
        {
            cout << arr[i] << " + " << arr[j] << " = " << k << endl;
            i++;
            j--;
        }

        else if (arr[i] + arr[j] > k) j--;
        else i++;
    } 
    
   return 0;
}