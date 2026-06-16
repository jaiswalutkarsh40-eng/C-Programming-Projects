#include<iostream>
using namespace std;
int main()
{
    int marks[5];
    int size=5;
    int k;
    int smallest=INT_MAX;
    cout<<"enter marks of student\n";
    for(int i=0;i<size;i++)
    {
        cin>>marks[i];
        if(marks[i]<smallest)
        {
            smallest=marks[i];
            k=i;
        }
    }
    cout<<"index of smallest marks is: "<<k<<endl;
    return 0;
}