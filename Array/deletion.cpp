#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100], n, pos;
    cout << "Enter number of elements in array: ";
    cin>>n;
    cout << "Enter elements of array: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout << "Enter position to delete element: ";
    cin >> pos;
    for(int i=pos; i<n-1; i++)
        arr[i] = arr[i+1];
    n--;
    cout << "Array after deletion: ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}