#include <stdio.h>

int main(){
int t,n,sum1= 0, sum2 =0;
 int arr[n];
scanf("%d %d", &t,&n);

while (t--){
   if(n%4!=0)
   printf("NO");

else{
    printf("YES\n");
   
    for(int i  =2; i<=n; i+=2){
     printf("i ");
     sum1 +=i;


    }

   for(int i  =1; i<=n-2; i+=2){
     printf("i ");
     sum2 +=i;


    }

   printf("%d\n",sum1-sum2);

}

}


    return 0;
}