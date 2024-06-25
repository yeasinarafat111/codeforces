#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int, int>> p;
    int s,n;
    cin>> s>>n;
    bool b=true;
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        p.push_back(make_pair(x,y));

    }
    sort(p.begin(),p.end());
    for(int i=0; i<n;i++){
       if(s>p[i].first)
       s+=p[i].second;
       else
       {
        b=false;
        break;
       }


    }
    if(b)
    cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;



    return 0;
}