#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int n)
{
    if(n == 0)
    return true;
    return isSorted(arr,n-1) && arr[n]>=arr[n-1];
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0;i<n;i++)
        cin >> arr[i];
    if(isSorted(arr,n))
        cout << "true";
    else
        cout << "false";
    return 0;
}
