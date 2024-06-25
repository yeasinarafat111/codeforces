#include <stdio.h>
#include <string.h>

void sortString(char* str) {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char a[100], b[100], c[100], s[200];
    scanf("%s %s %s", a, b, c);

    strcpy(s, a);
    strcat(s, b);

    sortString(s);
    sortString(c);

    if (strcmp(s, c) == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
