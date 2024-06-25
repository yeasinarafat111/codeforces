#include <stdio.h>
#include <string.h>

int main(){
int a,i,cnta=0,cntd=0; 
scanf("%d",&a);
char s[a];
scanf("%s",s);
for(i=0; i<a; i++){
if(s[i]== 'A')
cnta++;

else 
cntd++;

}
if(cnta>cntd)
printf("Anton\n");

else if(cntd>cnta)
printf("Danik\n");

else 
printf("Friendship\n");




    return 0;
}