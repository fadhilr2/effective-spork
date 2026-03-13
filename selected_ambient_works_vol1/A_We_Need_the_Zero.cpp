#include "bits/stdc++.h"
using namespace std;
#define int long long

vector<int> psum(const vector<int> &arr) {
 vector<int> psums(arr.size() + 1);
 for (int i = 0; i < arr.size(); i++) { psums[i + 1] = psums[i] + arr[i]; }
 return psums;
}

void solve(){
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto& e : a) cin >> e;

  int XOR = 0;
  for(auto e : a){
    XOR ^= e;
  }
  if(n % 2 == 0){
    if(XOR != 0){
      cout << -1 << "\n";
    } else{
      cout << 0 << "\n";
    }
  } else{
    cout << XOR << "\n";
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