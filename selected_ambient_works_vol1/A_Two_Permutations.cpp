#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n, a, b;
  cin >> n >> a >> b;

  if(n == a && a == b){
    cout << "Yes\n";
  }else if(a+b<=n-2){
    cout << "Yes\n";
  } else{
    cout << "No\n";
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