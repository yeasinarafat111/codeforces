#include <stdio.h>
 
int main() {
   int mid = 240;
   int i, n, k,c=0;
   scanf("%d %d", &n, &k);
   int remain = (mid - k);
   int ans = 0;
   for (i = 1; i <= n; i++) {
      ans += (5 * i);
         
       if(ans <= remain){
            ans++;
        }
        else{
            break;
        }

   }
   printf("%d\n", c);

   return 0;
}
