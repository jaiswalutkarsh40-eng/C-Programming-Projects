#include<iostream>
using namespace std;
int main()
{
    int row,col,num=1;
    cout<<"enter no. of row\n";
    cin>>row;
    cout<<"enter no. of col\n";
    cin>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}