#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int solved = 0;
    int un = 0;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x > 0) {
            solved += x;
        } else {
            if (solved < 1) {
                ++un;
            } else {
                --solved;
            }
        }
    }
    printf("%d", un);
    return 0;
}
