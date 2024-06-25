#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d",&n);
    char a[n+1];
    scanf("%s",a);

    int i,cnt=0;
  for(i=0; i<(n+1); i++){
   if(a[i]==a[i-1])
   cnt ++;

  }

printf("%d\n",cnt);


    return 0;
}
