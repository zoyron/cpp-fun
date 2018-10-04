#include <bits/stdc++.h>
using namespace std;
void printOdd(int n)
{
    if(n<=0) return;
    cout << n<< endl;
    printOdd(n-2);
}
void printEven(int n)
{
    if(n<=0) return;
    printEven(n-2);
     cout << n<<endl;
}
int main()
{
    int n;
    cin >> n;
    if(n%2 == 0)
    {
        printOdd(n-1);
        printEven(n-2);
    }
    else
    {
        printOdd(n-2);
        printEven(n-1);
    }
    return 0;
}
