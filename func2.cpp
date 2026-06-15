#include<iostream>
using namespace std;
int sumOfdigit(int n)
{
    int sum=0,rem;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"enter no."<<endl;
    cin>>n;
    int val=sumOfdigit(n);
    cout<<"sum = "<<val<<endl;
    return 0;
}