    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long int t,a,b,x,y,z;
        cin>>t;
        while(t--)
        {
            cin>>a>>b;
            x=a;
            y=a*b;
            z=x+y;
            if(b!=1)
            {
                cout<<"YES"<<endl;
                cout<<x<<" "<<y<<" "<<z<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }