#include<iostream>
using namespace std;
int bin(int n)
{
    int ans=0,pow=1,rem;
    while(n>0)
    {
       rem=n%10;
       n=n/10;
       ans+=(rem*pow);
       pow=pow*2;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"enter no. you want convert"<<endl;
    cin>>n;
    cout<<bin(n)<<endl;
    return 0;
}