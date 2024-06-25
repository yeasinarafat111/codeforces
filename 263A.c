#include <stdio.h>
int main(){
int arr[5][5];
int i,j,a,b;
for(i=1; i<=5;i++){
  for(j=1; j<=5; j++){
  scanf("%d",&arr[i][j]);

}
printf("\n");

}
for(i=1; i<=5;i++){
  for(j=1; j<=5; j++){
  if(arr[i][j]==1){
    if(i<2){
      a = 2-i;
    }
    else if(2<i){
        a = i-2;
    }
   if(j<2){
      b = 2-j;
    }
    else if(2<j){
        a = j-2;
    }

  }

}
printf("%d\n",a+b);
}

    return 0;
}