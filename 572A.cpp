#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int x,y,i,j,k,m,n;
    
    while(cin>>x>>y)
    {
        int a[x],b[y];
        cin>>k>>m;

        for(i=1;i<=x;i++)
            cin>>a[i];

        for(j=1;j<=y;j++)
            cin>>b[j];
        if(a[k]<b[y-m+1])
                cout<<"YES\n";
            else
                cout<<"NO\n";
    }
    return 0;
}