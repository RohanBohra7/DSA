#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],arr2[100], n, pos;
    cout << "Enter number of elements in array: ";
    cin>>n;
    cout << "Enter elements of array: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout << "Enter number of elements in array2: ";
    cin>>n;
    cout << "Enter elements of array2: ";
    for(int i=0; i<n; i++)
        cin>>arr2[i];
    int merged[200], i=0, j=0, k=0;
    while(i<n && j<n)
    {
        if(arr[i]<arr2[j])
            merged[k++] = arr[i++];
        else
            merged[k++] = arr2[j++];
    }
    while(i<n)
        merged[k++] = arr[i++];
    while(j<n)
        merged[k++] = arr2[j++];
    cout << "Merged array: ";
    for(int i=0; i<k; i++)
        cout << merged[i] << " ";
    cout << endl;
    return 0;
}