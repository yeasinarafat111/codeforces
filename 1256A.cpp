#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, n, s;
        cin >> a >> b >> n >> s;
        long long e= min(s/n,a);
       int d =s-(e*n);

        if(d<=b)
        cout<<"YES"<<endl;

        else
        cout<<"NO"<<endl;


      

    }
    return 0;
}
