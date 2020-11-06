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

    for (int i = 0; i < len-1; i++)
    {
        int count = 1;

        if (arr[i] != -1)
        {
            for (int j = i+1; j < len; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = -1;
                }
            }
        }

        if (count > 1) cout << arr[i] << " appears " << count << " times" << endl; 
    }
    
    return 0;
}