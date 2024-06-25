#include <bits/stdc++.h>
using namespace std;
int main(){
     int i,k;
    int n,count=0;
    string s;

    cin>>n>>k;
    cin>>s;

    for(i=0;i<n;i++)
    {
        if(s[i]=='#')
        {
            count++;
        }

        else
            count=0;

        if(count>=k)
        {
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";

    return 0;
}