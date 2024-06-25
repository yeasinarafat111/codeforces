#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    string number;

    if (t == 10) {
        number = "1";
        for (int i = 1; i < n; ++i) {
            number += "0";
        }
    } else {
        number = to_string(t);
        for (int i = 1; i < n; ++i) {
            number += "0";
        }
    }

    cout << number << endl;

    return 0;
}
