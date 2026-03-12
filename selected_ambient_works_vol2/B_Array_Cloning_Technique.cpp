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
  map<int, int> m = {};
  for(auto& e : a){
    cin >> e;
    m[e] += 1;
  };


  int g = 1;
  for(auto e : m){
    g = max(g, e.second);
  }



  int ops = 0;
  while(g < n){
    ops += 1;
    if(g*2 <= n){
      ops += ((g*2)-g);
    } else if(g*2 > n){
      ops += (n-g);
    }
    g *= 2;

  }

  cout << ops << "\n";

}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}