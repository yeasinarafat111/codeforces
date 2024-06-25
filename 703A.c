#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int cnt1 = 0, cnt2 = 0;
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a > b)
            cnt1++;
        else if (b > a)
            cnt2++;
    }

    if (cnt1 > cnt2)
        printf("Mishka\n");
    else if (cnt2 > cnt1)
        printf("Chris\n");
    else
        printf("Friendship is magic!^^\n");

    return 0;
}
