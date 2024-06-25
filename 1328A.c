#include <stdio.h>

int main() {
    int t;
    int a, b;
    scanf("%d", &t);

    while (t--) {
        int div = 0, p = 0;
        scanf("%d %d", &a, &b);

        if (a % b == 0) {
            printf("0\n");
            continue;
        }

        div = a / b;
        p = (div + 1) * b;
        printf("%d\n", p - a);
    }

    return 0;
}
