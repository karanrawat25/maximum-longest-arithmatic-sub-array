#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int pd =a[0]-a[1];
    int curr=2;
    int ans=2;
    for(int i=2;i<n;i++)
    {
        if(pd==a[i]-a[i-1])
        {
            curr++;
        }
        else
        {
            pd=a[i]-a[i-1];
            curr=2;
        }
        ans=max(ans,curr);
    }
    cout<<ans;

}
