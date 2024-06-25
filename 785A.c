#include <stdio.h>
#include <string.h>
int main(){
  int n;
  scanf("%d",&n);
  char str[20];
  int sum =0;

  while(n--){
    scanf("%s",str);
    if(str[0]== 'T')
    sum+= 4;
    else if(str[0]=='C')
    sum += 6;

    else if(str[0] == 'O')
    sum +=8;

    else if(str[0]== 'D')
    sum += 12;

    else if(str[0] == 'I')
    sum +=20;


  }
printf("%d\n",sum);
    return 0;
}