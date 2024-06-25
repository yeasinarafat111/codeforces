#include <stdio.h>

int main(){
    int t, ans=0;
    scanf("%d",&t);
    char a[4];
    while(t--) {
    scanf("%s",a);
    if(a[1]=='-'){
       --ans;
    }
    else{

   ans++;     
    }



    }
    printf("%d\n",ans);
    
    
    
    return 0;
}
