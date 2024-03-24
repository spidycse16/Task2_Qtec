
#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int> v,int target)
{
     int l=0,r=v.size()-1,mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(v[mid]==target)
            {
                cout<<mid<<endl;
                return 0;
            }
            if(v[mid]>target)
            r=mid-1;
            else
            l=mid+1;
        }
        if(target>v[mid])
        cout<<mid+1;
        else
        cout<<mid<<endl;
}
int main()
{
    int i,j,n,target;
    vector<int> v;
    cout<<"Please enter how many elements are in the array?"<<endl;
    cin>>n;
    cout<<"Please enter the array-"<<endl;
    for(i=0 ; i<n ; i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    cout<<"Enter the target number"<<endl;
    cin>>target;

    sort(v.begin(),v.end());
    binary_search(v,target);
}
