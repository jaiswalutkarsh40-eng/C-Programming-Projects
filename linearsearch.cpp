#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int target)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[5];
    int size=5;
    cout<<"enter elements of array\n";
    for(int i=0;i<size  ;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"enter element you want to search\n";
    cin>>target;
    cout<<"element found at index: "<<linearsearch(arr,size,target)<<endl;
    return 0;
}