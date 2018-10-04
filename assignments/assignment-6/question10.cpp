#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
void allIndex(int arr[],int n,int m)
{
    if(n == 0)
    {
        if(arr[n] == m)
        {
            ans.push_back(n);
            return ;
        }   
        else
        return ;
    }
    allIndex(arr,n-1,m);
    if(m == arr[n])
        ans.push_back(n);
}
int main()
{
    int n,m;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0;i<n;i++)
        cin >> arr[i];
    cin >> m;
    allIndex(arr,n-1,m);
    for(unsigned int i = 0;i<ans.size();i++)
        cout << ans[i] <<" ";
    return 0;
}
