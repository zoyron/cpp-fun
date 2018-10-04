#include <bits/stdc++.h>
using namespace std;
bool isBal(int arr[],int l, int r)
{
    if(l == r || l == r+1) return arr[l] == arr[r];
    return arr[l] == arr[r] && isBal(arr,l+1,r-1);
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0;i<n;i++)
        cin >> arr[i];
    if(isBal(arr,0,n-1))
        cout << "true";
    else
        cout << "false";
    return 0;
}
