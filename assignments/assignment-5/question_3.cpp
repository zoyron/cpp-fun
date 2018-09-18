#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    cin.getline(str,100);
    for(int i = 0;str[i]!='\0';i++)
    {
        if(str[i]<97)
            str[i]+=32;
        else
            str[i]-=32;

        cout << str[i];
    }
    cout << endl;
    return 0;
}
