#include <bits/stdc++.h>
using namespace std;
bool isPresent(int arr[],int n,int m)
{
    if(n == 0)
    {
        return m == arr[n];
    }
    return isPresent(arr,n-1,m) || m == arr[n];
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0;i<n;i++)
        cin >> arr[i];
    int m;
    cin >> m;
    if(isPresent(arr,n,m))
        cout << "true";
    else
        cout << "false";
    return 0;
}
