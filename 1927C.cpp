#include <bits/stdc++.h>

using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n,m,k;
    cin>>n>>m>>k;
    vector < int >vec(n),vec2(m);
    map<int,int>mp;
    for(int i=0; i<n; i++){
        cin>>vec[i];
        mp[vec[i]]=1;
    }
    for(int j=0; j<m; j++){
        cin >> vec2[j];
        if(mp[vec2[j]]== 1){
            mp[vec2[j]] = 4;

        } 
        else if(mp[vec2[j]] == 0)
        mp[vec2[j]] =2;


    }
  int a=k/2, b=k/2;
  for(int i=1; i<=k; i++){
    if(mp[i]==1)a--;
    if(mp[i]==2)b--;
    if(mp[i]==0)a=-1;

  }
  if(a>=0&&b>=0)
  cout<<"YES\n";
  else
  cout<<"NO\n";
    




   }


    return 0;
}
