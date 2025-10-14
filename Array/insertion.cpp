#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100], n, pos, val;
    cout << "Enter number of elements in array: ";
    cin>>n;
    cout << "Enter elements of array: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout << "Enter position to insert new element: ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> val;
    for(int i=n; i>pos; i--)
        arr[i] = arr[i-1];
    arr[pos] = val;
    n++;
    cout << "Array after insertion: ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}