#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int p[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (p[j] == i + 1) {
                printf("%d ", j + 1);
                break;
            }
        }
    }
    return 0;
}
