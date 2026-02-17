#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto& e : a){
    cin >> e;
  };

  auto max_it = max_element(a.begin(), a.end());
  auto min_it = min_element(a.begin(), a.end());

  if(*max_it == *min_it){
    cout << "NO\n";
  } else{
    cout << "YES\n";
    swap(a[0], a[distance(a.begin(), max_it)]);
    swap(a[1], a[distance(a.begin(), max_it)]);
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