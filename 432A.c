#include <stdio.h>

int main(){
int n, k,valids=0;
scanf("%d %d",&n,&k);
int persons;

for(int i =0; i<n; i++){
  scanf("%d",&persons);

if((persons + k )<=5)
valids++;

}

printf("%d\n", valids/3);



    return 0;
}