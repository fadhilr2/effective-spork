#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n, k, x;
  cin >> n >> k >> x;

  if(x == 1 && k == 1){
    cout << "NO\n";
    return;
  } else if(x == 1 && k == 2 && n % 2 != 0){
    cout << "NO\n";
    return;
  }

  if(x != 1){
    cout << "YES\n";
    cout << n << "\n";
    for(int i = 0; i < n; i++ ) cout << 1 << " ";
    cout << "\n";
  }  else if(n % 2 == 0){
    cout << "YES\n";
    cout << n/2 << "\n";
    for(int i = 0; i < n/2; i++) cout << 2 << " ";
    cout << "\n";
  } else if(n % 2 != 0){
    cout << "YES\n";
    cout << 1 + (n/2)-1 << "\n";
    cout << 3 << " ";
    for(int i = 0; i < (n/2)-1; i++) cout << 2 << " ";
    cout << "\n";
  }
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}