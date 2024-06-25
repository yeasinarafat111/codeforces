#include <bits/stdc++.h>
using namespace std;

int ternarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid1 = (high + low) / 3;
        int mid2 = high-(high-low)/3;

        if (arr[mid1] == target)
            return mid1;
        if (arr[mid2] == target)
            return mid2;

        if (target < arr[mid1]) {
            high = mid1 - 1;
        }
        else if(target >arr[mid1] && target <arr[mid2]){
        low = mid1+1;
        high = mid2-1;
        }
        else
        low= mid2+1;




    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int target = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = ternarySearch(arr, 0, n - 1, target);

    (result == -1) ? cout << "Element not here\n" : cout << "Element found at index " << result << "\n";

    return 0;
}
