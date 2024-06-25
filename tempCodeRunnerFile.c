#include <stdio.h>

int main(){
   int n;
   scanf("%d",&n);

   int a,b,c;
   while (n--){
     scanf("%d %d %d", &a,&b,&c);

     if(a>b && a<c)
     printf("%d",a);

     else if(b>a && b<c)
     printf("%d",&b);

     
     else 
     printf("%d",c);
   



   }



    return 0;
}