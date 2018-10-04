#include <bits/stdc++.h>
using namespace std;
void printStar(int n)
{
    if(n<=0) return;
    for(int i = 1;i<=n;i++)
        cout << "*"<<" ";
    cout << endl;
    printStar(n-1);
}
int main()
{
    int n;
    cin >> n;
    printStar(n);
    return 0;
}
