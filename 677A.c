#include <stdio.h>

int main(){
int a,b,d=0;
scanf("%d %d",&a,&b);
int c,i;
for(i =0; i<a; i++){
scanf("%d",&c);

if(c>b){
d += 2;
}
else
d++;

}
printf("%d",d);
    return 0;
}