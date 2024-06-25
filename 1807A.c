#include <stdio.h>

int main(){
   int t;
   scanf("%d", &t);
   int arr[3];
   
   while (t--){
   for(int i=0; i<3; i++)
   scanf("%d",&arr[i]);
    
    if((arr[0]+arr[1])==arr[2])
    printf("+\n");

   if((arr[0] - arr[1])==arr[2])
    printf("-\n");

   }



    return 0;
}