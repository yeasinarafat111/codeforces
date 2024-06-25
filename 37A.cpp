#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,a;
    cin>>n;
    int mx=0, cnt[1001]={0};
    set<int>s;
    for(int i=0; i<n; i++){
       cin>>a;
       s.insert(a);
       cnt[a]++;
       mx= max(mx, cnt[a]);

    }


   cout<<mx<<" "<<s.size();

    return 0;
}