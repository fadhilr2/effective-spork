#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;

  int twos = 0;
  vector<int> a(n);
  for(auto& e : a) {
    cin >> e;
    if(e == 2) twos += 1;
  }

  
  if(twos % 2 != 0){
    cout << -1 << "\n";
    return;
  }

  int cnt  = 0;
  for(int i = 0; i <n;i++){
    if(a[i] == 2) cnt += 1;
    if(cnt == (twos/2)){
      cout << i+1 << "\n";
      return;
    }
  }

  cout << 1 << "\n";

}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}