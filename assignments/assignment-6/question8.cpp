#include <bits/stdc++.h>
using namespace std;
int whatIndex(int arr[],int sp,int n,int m)
{
    if(sp >= n) return -1;
    if(arr[sp] == m) return sp;
    return whatIndex(arr,sp+1,n,m);
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0;i<n;i++)
        cin>> arr[i];
    int m;
    cin >> m;
    cout << whatIndex(arr,0,n,m);
    return 0;
}
