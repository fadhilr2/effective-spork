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
  set<int> s;
  for(auto& e : a){
     cin >> e;
     s.insert(e);
  }

  swap(a[0], a[1]);
  swap(a.back(), a[0]);
  if(a[0] == a[1]){
    cout << "NO\n";
  } else{
    cout << "YES\n";
    for(auto e : a) cout << e << " ";
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