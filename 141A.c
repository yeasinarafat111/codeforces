#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101], c[101];

    scanf("%s %s %s", a, b, c);

    int len_a = strlen(a);
    int len_b = strlen(b);
    int len_c = strlen(c);

    
    for (int i = 0; i < len_a; i++) {
        int found = 0;
        for (int j = 0; j < len_c; j++) {
            if (a[i] == c[j]) {
                found = 1;
                break;  
            }
        }
        if (found)
            printf("YES\n");
        else
            printf("NO\n");
    }


    for (int i = 0; i < len_b; i++) {
        int found = 0;
        for (int j = 0; j < len_c; j++) {
            if (b[i] == c[j]) {
                found = 1;
                break; 
            }
        }
        if (found)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
