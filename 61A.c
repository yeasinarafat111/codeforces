#include <stdio.h>

int main(){
int arr1[101],arr2[101];
int i,j;
for(i=0; i<101; i++){
scanf("%d",&arr1[i]);

}
for(j=0; j<101; j++){
scanf("%d",&arr1[j]);

}

while(arr1[i] != '\0'&& arr2[j] != '\0')
{
if(arr1[i] == arr2[j]){
    printf("0");
}
else
printf("1");


i++;
}







    return 0;
}