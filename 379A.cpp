#include <bits/stdc++.h>

using namespace std;
int main(){
      long long int a,b,i;
    cin>>a>>b;
    for(i=1; i<=a; i++)
    {
        if(i%b==0)
        a++;
    }
        cout<<a<<endl;



    return 0;
}