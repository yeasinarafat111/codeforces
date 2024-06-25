#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    float sum = 0.0;
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    double avg = sum / n;
    printf("%lf\n", avg);
    return 0;
}
