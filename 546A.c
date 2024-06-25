#include <stdio.h>

int main() {
    int i, k, n, w, ans = 0;
    scanf("%d %d %d", &k, &n, &w);

   
    for (i = 1; i <= w; i++) {
        ans += (i * k);
    }

    int borrowed = ans - n;

    
    if (borrowed <= 0) {
        printf("0\n"); 
    } else {
        printf("%d\n", borrowed); 
    }

    return 0;
}
