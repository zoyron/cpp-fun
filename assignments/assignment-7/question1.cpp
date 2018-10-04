#include <bits/stdc++.h>
using namespace std;
int digitSum(char str[],int n)
{
    if(n == 0) return str[n] - '0';
    return str[n]+digitSum(str,n-1) - '0';
}
int main()
{
    char str[1000];
    cin.getline(str,1000);
    int n;
    for(n = 0;str[n]!='\0';n++);
    cout << digitSum(str,n-1);
    return 0;
}
