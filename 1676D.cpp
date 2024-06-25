#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    long long arr[n][m];
    for (int r = 0; r < n; r++) {
      for (int c = 0; c < m; c++) {
        cin >> arr[r][c];
      }
    }
    int ans =0;
    for(int r=0; r<n; r++){
        for(int c=0; c<m; c++){
            int sum =0;
            for(int i=1; r+i<n && c+i<m; i++)
            sum+=arr[r+i][c+i];

            for(int i=1; r-i>=0 && c+i<m; i++)
            sum+=arr[r-i][c+i];

            for(int i=1; r-i>=0 && c-i>=0; i++)
            sum+=arr[r-i][c-i];
            
            for(int i=1; r+i<n && c-i>=0; i++)
            sum+=arr[r+i][c-i];


            


          sum+=arr[r][c];
          ans =max(ans,sum);



        }
    } 




      
    cout << ans << "\n";
  }
  return 0;
}
