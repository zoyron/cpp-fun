#include <bits/stdc++.h>
using namespace std;
void printStar(int n,int sn)
{
    if(sn>n) return ;
    for(int i = 1;i<=sn;i++)
        cout << "*"<<" ";
    cout << endl;
    printStar(n,sn+1);
}
int main()
{
    int n;
    cin >> n;
    printStar(n,1);
    return 0;
}
