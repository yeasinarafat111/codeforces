#include <iostream>
#include <string>
using namespace std;

int main() {
    long int a, b, c, d, ans = 0, i;
    char s[100001];
    
    while (cin >> a >> b >> c >> d) {
        cin >> s;
        for (i = 0; s[i] != '\0'; i++) {
            if (s[i] == '1') {
                ans += a;
            } else if (s[i] == '2') {
                ans += b;
            } else if (s[i] == '3') {
                ans += c;
            } else if (s[i] == '4') {
                ans += d;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
