//neg on left side and pos on right side of the array
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {-3,3,-23,-12,0,43,64,-11,2};
    int len = sizeof(arr) / sizeof(arr[0]);
    int i = 0, j = len-1; //i for pos, j for neg
    int temp;

    cout << "given array: " << endl;
    for (int x = 0; x < len; x++) 
        cout << arr[x] << " ";

    cout << endl;

    while (i < j) {
        while (arr[i] < 0) i++;
        while (arr[j] > 0) j--;
        if (i < j) {
            temp = arr[i], arr[i] = arr[j], arr[j] = temp;
        }
    }
    
    cout << "negatives & postives separated array: " << endl;

    for (int x = 0; x < len; x++) 
        cout << arr[x] << " ";

    return 0;
}