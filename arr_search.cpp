#include <iostream>

using namespace std;

int find( int arr[], int n, int key) {
    for (int i = 0; i < n; i++) 
        if ( arr[i] == key) return i;
    return -1;
}
int main()
{
    int arr[] = {23,12,43,64,11,2};
    int n = 6;
    int key = 64;
    int pos = find(arr, n, key);
    if (pos == -1) cout << "element not found" << endl;
    else cout << "element found at position " << pos << endl;
    return 0;
    
}