#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int prefixsum[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    prefixsum[0]=a[0];
    for (int i = 1; i < n; ++i)
    {
        prefixsum[i]=prefixsum[i-1]+a[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cout<<prefixsum[i]<<" ";
    }

    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
    int l,r;
    cin>>l>>r;
    l--;
    r--;
    int ans=prefixsum[r]-prefixsum[l-1];   
    cout<<ans<<endl;
    }
    return 0;
}
