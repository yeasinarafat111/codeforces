#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a, b, c;
    while (n--) {
        scanf("%d %d %d", &a, &b, &c);

        if ((a > b && a < c) || (a < b && a > c))
            printf("%d\n", a);
        else if ((b > a && b < c) || (b < a && b > c))
            printf("%d\n", b);
        else
            printf("%d\n", c);
    }

    return 0;
}
