#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    string s;
    cin >> s;

    ll n = s.size();
    
    for (int i = 0; i < (n / 2) - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main()
{
    
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }

}