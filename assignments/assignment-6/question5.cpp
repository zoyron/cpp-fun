#include <bits/stdc++.h>
using namespace std;
int tri(int n)
{
    if( n == 0) return 0;
    tri(n-1);
    return n+tri(n-1);
}
int main()
{
    int n;
    cin >> n;
    cout << tri(n);
    return 0;
}
