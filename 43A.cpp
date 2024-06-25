#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string team,a,b;
map<string, int> mp;
while(n--){
cin>>team;

  mp[team]++;
  if(a.empty()) a = team;
  else if(b.empty()&& team!=a) b=team;

}
if(mp[a]>mp[b])
cout<<a<<endl;

else
cout<<b<<endl;



    return 0;
}