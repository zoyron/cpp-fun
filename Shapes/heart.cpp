// it will output a heart when executed the code
#include <iostream>
using namespace std;
int main()
{
    int n=15;

    cout<<"    *******        *******    "<<endl;
    cout<<"   *********      *********   "<<endl;
    cout<<"  ***********    ***********  "<<endl;
    cout<<" *************  ************* "<<endl;
    cout<<"******************************"<<endl;
    for(int j = n;j>0;j--)
    {
        for(int i =1; i<=n-j;i++)
        {
            cout<<" ";
        }
        for(int i =1;i<=(2*j)-1;i++)
        {
            cout<<"*";
        }
        cout<<endl
        ;
    }
    return 0;
}
