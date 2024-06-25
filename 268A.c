#include <stdio.h>

int main() {
    int i, j, n, cnt = 0;
    scanf("%d", &n);
    int a[101], b[101];
 
    for (i = 0; i < n; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                cnt++;
            }
        }
    }
    printf("%d\n", cnt);

    return 0;
}
