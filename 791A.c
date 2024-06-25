#include <stdio.h>

int main() {
    int a, b,cnt=0;
    scanf("%d %d", &a, &b);
    

    if(a>b)
    cnt =0;
else{
   while(a<=b){

   a *=3;
   b*=2;
   cnt++;

   }
}
printf("%d\n",cnt);
    return 0;
}
