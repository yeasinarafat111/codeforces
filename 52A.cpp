#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> mp;
    int maxCount = 0; 
    int maxElement; 

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        mp[k]++; 

        
        if (mp[k] > maxCount) {
            maxCount = mp[k];
            
        }
    }
   cout<<(n-maxCount)<<endl;
   

    return 0;
}