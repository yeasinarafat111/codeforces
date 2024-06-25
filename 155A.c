#include <stdio.h>

int main(){
  int i, n,cnt=0;
  scanf("%d",&n);
  int arr[n];

  for(i=0; i<n; i++){
    scanf("%d",&arr[i]);

  }
int min = arr[0];
int max =arr[0];
  for(i=0; i<n; i++){
    
    if(arr[i]<min)
    {
        min = arr[i];
    
    }
   else if(max>arr[i]){
    max =arr[i];
    cnt++;


   }


  }#include <stdio.h>

int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            cnt++;
        } else if (arr[i] < min) {
            min = arr[i];
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}

  printf("%d\n",cnt);

    return 0;
}