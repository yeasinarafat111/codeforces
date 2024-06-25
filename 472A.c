#include <stdio.h>

int main(){
int n;
scanf("%d", &n);
int a;
while (n--){
scanf("%d", &a);

if(a<=1399)
printf("Division 4\n");

else if(a<=1599)
printf("Division 3\n");

else if(a<=1899)
printf("Division 2\n");

else if(a>=1899)
printf("Division 1\n");

}


    return 0;
}