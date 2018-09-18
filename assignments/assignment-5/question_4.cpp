#include <bits/stdc++.h>
using namespace std;
void shift(char str[])
{
    for(int i = 0;str[i]!='\0';i++)
    {
        if(i%2)
            str[i]++;
        else
            str[i]--;
    }
}
int main()
{
    char str[100];
    cin.getline(str,100);
    shift(str);
    for(int i = 0;str[i]!='\0';i++)
        cout << str[i];
    return 0;
}
