#include <stdio.h>
#include <string.h>
int main(){
int n,i,l;

scanf("%d",&n);
char word[100];
for(i=0; i<100; i++){
gets(word);
 l= strlen(word);
if(l>10)
{
printf("%c",word[0]);
printf("%d",l-2);
printf("%c",word[l-1]);

}printf("\n");
else{
    printf("%s\n",word);
}


}


    return 0;
}