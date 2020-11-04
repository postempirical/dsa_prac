//theta m + n
#include <iostream>

using namespace std;

int main()
{
    int arr1[] = {1,2,3,4,5,6,7,8};
    int arr2[] = {9,10,11,12,12,14};
    int len1 = sizeof(arr1)/sizeof(arr1[0]);
    int len2 = sizeof(arr2)/sizeof(arr2[0]);
    int arr3[len1+len2];
    int i = 0, j = 0, k = 0;

    cout << "original arrays: " << endl;
    for (int i = 0; i < len1; i++) 
        cout << arr1[i] << " ";
    cout << endl;
    for (int i = 0; i < len2; i++) 
        cout << arr2[i] << " ";
    cout << endl;

    while (i < len1 && j < len2) {
        if (arr1[i] < arr2[j]) arr3[k++] = arr1[i++];
        else (arr3[k++] = arr2[j++]);
    }

    while (i < len1) arr3[k++] = arr1[i++];
    while (j < len2) arr3[k++] = arr2[j++];
    

    cout << "merged array: " << endl;

    for (int x = 0; x < len1 + len2; x++) 
        cout << arr3[x] << " ";

    return 0;
}