#include <bits/stdc++.h>
using namespace std;
void add_middle(char arr[],int new_arr[])
{
    new_arr[0] = arr[0];
    int k = 1;
    for(int i = 1;arr[i]!='\0';i++)
    {
        new_arr[k++] = char(abs(int(arr[i]) - int(arr[i-1])));
        new_arr[k++] = arr[i];
    }
    for(int i = 0;new_arr[i]!='\0';i++)
    {
        cout << char(new_arr[i]);
    }

}
int main()
{
    char arr[100];
    int new_arr[200];
    cin.getline(arr,100);
    add_middle(arr,new_arr);
    return 0;
}
