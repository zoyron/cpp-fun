#include <bits/stdc++.h>
using namespace std;
void Inverse(int arr[],int n,int sp)
{
    if(sp>=n)
        return;
    int val = arr[sp];
    Inverse(arr,n,sp+1);
    arr[val] = sp;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0;i<n;i++)
        cin >> arr[i];
    Inverse(arr,n,0);
    for(int i = 0;i<n;i++)
        cout << arr[i]<<" ";
    return 0;
}
