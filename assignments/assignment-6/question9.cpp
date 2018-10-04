#include <bits/stdc++.h>
using namespace std;
int whatIndex(int arr[],int n, int m)
{
    if(n == 0)
    {
        if(m == arr[n])
            return n;
        else 
            return -1;
    }
    int x = whatIndex(arr,n-1,m);
        
    if(m == arr[n])
        return n;
    else
        return x;
}
int main()
{
    int n,m;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    cin >> m;
    cout << whatIndex(arr,n-1,m);
    return 0;
}
