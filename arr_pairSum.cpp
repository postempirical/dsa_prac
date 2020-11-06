//pair of elements with sum k (no duplicates)

#include <iostream>

using namespace std;

int main()
{
    int arr[] = {6,3,8,10,16,7,5,2,9,14};
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "original array: " << endl;
    for (int i = 0; i < len; i++) 
        cout << arr[i] << " ";

    cout << endl;

    int k = 10;
    cout << "element pairs for value 10: " << endl;
    
    for (int i = 0; i < len-1; i++) 
    {
        for (int j = i+1; j < len; j++)
        {
           if (arr[i] + arr[j] == k)
           {
               cout << arr[i] << " + " << arr[j] << " equals " << k << endl;
           }
            
        }
        
    }
    
    return 0;
}