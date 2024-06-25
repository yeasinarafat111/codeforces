#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int low,int high, int trgt){
    while (low<=high){
      int mid= low+(high-low)/2;
      if(arr[mid]==trgt)
      return mid;
      if(arr[mid]<trgt)
      low = mid+1;
      else
      high = mid-1; 
     

    }
   return -1;
}

int main(){
    int arr[]= {2,3,10,10,10,40};
    int trgt = 10;
    int n = sizeof(arr)/ sizeof(arr[0]);
    int result = binarysearch(arr,0,n-1,trgt);
    (result == -1)
     ?cout<<"element not here"
     :cout<<result;




    return 0;
}