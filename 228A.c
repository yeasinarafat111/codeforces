#include <stdio.h>

int main() {
    int arr[4];
    int i;
    int cnt = 1; 
    for (i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < 4; i++) { 
        int j;
        int unique = 1; 

       
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                unique = 0; 
                break;
            }
        }

        if (unique) {
            cnt++;
        }
    }

    printf("%d\n", 4-cnt);

    return 0;
}
