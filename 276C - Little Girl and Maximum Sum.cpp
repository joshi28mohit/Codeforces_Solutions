#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int q;
    cin>>q;
    vector<long long int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<long long int> idx(n,0);
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        l--;r--;
        idx[l]++;
        if(r+1 < n) idx[r+1]--;
    }
    for(int i=1;i<n;i++)
    {
        idx[i] = idx[i] + idx[i-1];
    }
    sort(arr.begin(),arr.end());
    sort(idx.begin(),idx.end());
    
    long long int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans+arr[i]*idx[i];
    }
    
    cout<<ans<<endl;
}
