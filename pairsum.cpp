#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int> v,int target)
{
    int n=v.size();
    vector<int>ans;
     int i=0,j=n-1;
     while(i<j)
     {
        int pairSum=v[i]+v[j];
        if(pairSum>target)
        {
            j--;
        }
        else if(pairSum<target)
        {
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
     }
    return ans;
}
int main()
{
    vector<int>v={2,7,11,15};
    int target=26;
    vector<int>ans=pairSum(v,target);
    cout<<ans[0]<<","<<ans[1]<<endl;
}
