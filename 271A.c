#include <stdio.h>

int main()
{
 int a,b,c,d;
 int n;
 scanf("%d",&n);
 while(1){
 n++;
a = n/1000;
b = (n/100)%10;
c = (n/10)%10;
d= n%10;
if(a != b && a != c && a != d && b != c && b != d && c != d){
      break;
    }

 }
printf("%d",n);

    return 0;
}