#include<iostream>
using namespace std;
void reverse(int arr[],int size)
{
    int start=0,end=size-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[5];
    int size=5;
    cout<<"enter elements of array\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,size);
    cout<<"reversed array is: \n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}