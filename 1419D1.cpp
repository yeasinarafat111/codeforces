#include <bits/stdc++.h>

using namespace std;
int main(){
    vector<int>v1{1,2};
    vector<int>v2{3,4};
    copy(v2.begin(),v2.end(),back_inserter(v1));
    for(int i=0; i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
   
    cout<<endl;

    return 0;
}