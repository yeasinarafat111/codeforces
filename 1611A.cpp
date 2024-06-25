
#include<bits/stdc++.h>
using namespace std;


int solve(int n)
{
    if(n%2 == 0)
    return 0;
    string s = to_string(n);
    bool ok = 0;
    for(int i=0; i<s.size(); i++)
    {
        if ((int(s[i]) - 48) % 2 == 0) 
        {
            ok = 1;
            break;
        }
    }
    if (ok == 0)
    return -1;
    else
    {
        if ((int(s[0]) - 48) % 2 == 0) 
        return 1;
        else
        return 2;
    }
} 

int main()
{
  
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}