#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int denom[] = {1, 5, 10, 20, 100};
    int size = sizeof(denom) / sizeof(denom[0]);
    int c = 0;

    for (int i = size - 1; i >= 0; i--) {
        if (n >= denom[i]) {
            int num = n / denom[i];
            n = n - (num * denom[i]);
            c += num;
        }
    }

    printf("%d\n", c);
    return 0;
}
