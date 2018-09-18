#include <bits/stdc++.h>
using namespace std;
int len;
void remove_dup(char str[])
{
    for(len = 0;str[len]!='\0';len++);
    for(int i = 0;i<len;i++)
    {
        if(str[i] == str[i+1])
            str[i] = '\0';
    }
}
int main()
{
    char str[100];
    cin.getline(str,100);
    remove_dup(str);
    for(int i = 0;i<len;i++)
    {
        if(str[i] != '\0')
            cout << str[i];
    }
    return 0;
}
