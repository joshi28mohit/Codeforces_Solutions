#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,k;
        cin>>x>>k;
        int x1=x;
        top:
            int sum=0;
            while(x1!=0)
            {
                int div=x1%10;
                sum=sum+div;
                x1=x1/10;
            }
        if(sum%k==0) cout<<x<<endl;
        else {x1=++x; goto top;}
    }
}
