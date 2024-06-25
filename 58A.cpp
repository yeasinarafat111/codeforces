#include <bits/stdc++.h>
using namespace std;
int main(){
    string str,target="hello";
    cin >> str;
    int i,k = 0;
    for(i=0; i<str.length(); i++){
        if(str[i] == target[k])
        k++;

    } 
    if(k==target.length())
    cout<<"YES"<<endl;

    else 
    cout<<"NO"<<endl;





    return 0;
}