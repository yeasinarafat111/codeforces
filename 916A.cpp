#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int sum=0;
        
        sum+=a+b+c+n;
        if(sum%3!=0 || sum/3<a || sum/3<b || sum/3<c)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
      

    

    



    return 0;
}