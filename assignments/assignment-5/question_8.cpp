#include <bits/stdc++.h>
using namespace std;
int max_char(int arr[])
{
    int max_value= 0,max_index = 0;
    for(int i = 0;i<257;i++)
    {
        if(arr[i]>max_value)
            {
                max_value = arr[i];
                max_index = i;
            }
    }
    return max_index;
}
int main()
{
    char str[100];
    int arr[257] = {0};
    cin.getline(str,100);
    for(int i = 0;str[i]!='\0';i++)
        arr[str[i]]++;
    cout << char(max_char(arr));
    return 0;
}
