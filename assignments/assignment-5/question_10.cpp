#include <bits/stdc++.h>
using namespace std;
void compress(char str[],int len)
{
    int counter = 1;
    for(int i = 0;i<len;i++)
    {
        if(str[i] == str[i+1])
            str[i] = '\0';
    }
    for(int i = 0;i<len;i++)
    {
        if(str[i]!='\0')
        {
            if(counter == 1)
                cout << str[i];
            else
            {
                cout << str[i]<< counter;
                counter = 1;
            }
        }
        else
            counter++;
    }
}
int main()
{
    char str[100];
    cin.getline(str,100);
    int len;
    for(len = 0;str[len]!='\0';len++);
    compress(str,len);
    return 0;
}
