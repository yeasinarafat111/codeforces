#include <stdio.h>

int main(){
int n;
scanf("%d",&n);
int a;
int hard =0;
for(int i =0; i<n; i++){
scanf("%d",&a);
if(a == 1)
hard =1;
 
}
if(hard)
printf("HARD\n");

else
printf("EASY\n");

    return 0;
}