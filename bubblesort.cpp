#include <bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>& vec, int n) {
    bool swapped;
    for (int i = 1; i < n; i++) {
        swapped = false;
        for (int j = 0; j < n - i; j++) {
            if (vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    bubblesort(vec, n);

    return 0;
}
