#include <bits/stdc++.h>
using namespace std;
bool palin(char str[]) // function for returning palindrome
{
    int i = 0;
    int j; //variable to get the length of the string that we entered in the function.
    for(j = 0;str[j]!='\0';j++);
    j-=1; // reducing the length by 1 in order to get the actual index of the last element of the string
    while(i<=j)
    {
        if(str[i++]!=str[j--])
            return false;
    }
    return true;
}
int main()
{
    char arr[100];
    cin.getline(arr,100);
    cout << palin(arr)<<endl;
    return 0;
}
