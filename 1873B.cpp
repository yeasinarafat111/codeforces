#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        sort(vec.begin(),vec.end());
        vec[0]+=1;
        long long mul=1;
        for(int i=0; i<n; i++){
             mul*=vec[i];
        }
        cout<<mul<<endl;

        
    }

    return 0;
}
