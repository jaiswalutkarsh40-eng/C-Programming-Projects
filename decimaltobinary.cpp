#include<iostream>
using namespace std;
int dec(int n)
{
    int ans=0,pow=1,rem;
    while(n>0)
    {
        rem=n%2;
        n=n/2;
        ans += (rem*pow);
        pow=pow*10;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"enter no. you want to convet"<<endl;
    for(int i=1;i<=10;i++)
    {
       cout<<dec(i)<<endl;
    }
    return 0;
}
