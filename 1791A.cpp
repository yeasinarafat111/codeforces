#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        char c;
        cin >>c; 
        string s = "codeforces";
        bool found = false;

        for (char ch : s) {
            if (c == ch) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
