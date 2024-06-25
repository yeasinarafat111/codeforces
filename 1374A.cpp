#include <iostream>

using namespace std;

int main(){
    long long int t;
    cin >> t;
    long long int x,y,n;
    while(t--){
        cin >> x>>y>>n;
        long long int ans =0;
        ans = n - n % x + y;
        if(ans <= n){
            cout<<ans<<endl;
        }
        else{
            cout<<(n - n % x - (x - y))<<endl;
        }
    }

    return 0;
}








    


    