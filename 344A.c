#include <stdio.h>
int main(){

int n,i,cnt= 0;
scanf("%d",&n);
int arr[n];
for(i=0; i<n; i++){
scanf("%d",&arr[i]);

}
for(i=0; i<n; i++){
if(arr[i] != arr[i+1])
cnt++;




}
printf("%d\n",cnt);

    return 0;
}