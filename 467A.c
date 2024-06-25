#include <stdio.h>

int main() {
    int a, b, c, i, cnt = 0;
    
    scanf("%d", &c);

    for (i = 0; i < c; i++) {
    scanf("%d %d", &a, &b);
        
        if ((b-a)>=2)
            cnt++;
    }

    
    printf("%d\n", cnt);
    
    return 0;
}
