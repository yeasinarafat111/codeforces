#include <stdio.h>
int main()
{
  int a,b,i,r;
  scanf("%d %d",&a,&b);
  
  for(i=1; i<=b; i++){
   r= a%10;
   if(r==0){
   a/=10;

   }
  else
  a--;


  }
printf("%d\n",a);
    return 0;
}