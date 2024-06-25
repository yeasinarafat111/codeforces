#include <stdio.h>

int main(){
int stillnow = 0;
int a,b,n;
int capacity =0 ;
scanf("%d",&n);
for(int i =0; i<n; i++)
{  scanf("%d %d",&a,&b);
stillnow -= a;
stillnow += b;
if(stillnow>capacity){
capacity = stillnow;

}

}
printf("%d\n",capacity);

    return 0;
}