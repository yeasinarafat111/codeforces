#include <stdio.h>
#include <string.h>

int main(){
 int i;   
char s[1000];
char alp[26] = {0};
fgets(s,sizeof(s),stdin);
int l= strlen(s);
for(i=0; i<l; i++){

  if(s[i]>='a' &&s[i]<='z'){   
alp[s[i]-'a'] = 1;

  }

}
int uniq=0;
for(int i =0; i<26; i++){
if(alp[i]==1)
uniq ++;


}
printf("%d",uniq);


    return 0;
}