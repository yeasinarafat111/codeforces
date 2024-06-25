#include <stdio.h>
#include <string.h>

int main() {
    char s1[101];
    char s2[101];
    scanf("%s %s", s1, s2);
    int i, j;
    int len = strlen(s1);
    int flag = 1; 
    for (i = 0, j = len - 1; i < len; i++, j--) {
        if (s1[i] != s2[j]) {
            flag = 0; 
            break;
        }
    }
    if (flag == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
