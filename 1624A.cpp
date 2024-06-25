#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        int arr[n];
        int min_val = INT_MAX, max_val = INT_MIN;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            // Update min and max values
            min_val = min(min_val, arr[i]);
            max_val = max(max_val, arr[i]);
        }

        int operations = max_val - min_val;
        cout << operations << endl;
    }

    return 0;
}
