#include <bits/stdc++.h>
using namespace std;
void Reverse(int arr[],int l, int r)
{
    if(l == r || l == r-1)
    {
        if(l == r) return ;
        else
        {
            int temp = arr[r];
            arr[r] = arr[l];
            arr[l] = temp;
            return ;
        }
    }
    Reverse(arr,l+1,r-1);
    int temp = arr[r];
    arr[r] = arr[l];
    arr[l] = temp;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    Reverse(arr,0,n-1);
    for(int i = 0;i<n;i++)
    {
        cout << arr[i]<< " ";
    }
    return 0;
}
