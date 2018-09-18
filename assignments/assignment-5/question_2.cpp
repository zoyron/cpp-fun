#include <bits/stdc++.h>
using namespace std;
int counter = 0;
bool palin(char str[],int x)
{
    int i = 0,j = x-1;
    while(i<=j)
    {
        if(str[i++]!=str[j--])
            return false;
    }
    return true;
}
int main()
{
    int len;
    char arr[100];
    cin.getline(arr,100);
    for(len  = 0;arr[len]!='\0';len++);
    for(int i = 0;i<len;i++)
    {
        for(int j = i;j<len;j++)
        {
            char new_arr[100];
            int m = 0;
            for(int k = i;k<=j;k++)
            {
                new_arr[m++] = arr[k];
            }
            if(palin(new_arr,m))
                counter++;
        }
    }
    cout<< counter<<endl;
    return 0;
}
