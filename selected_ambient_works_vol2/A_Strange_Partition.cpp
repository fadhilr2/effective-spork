#include "bits/stdc++.h"
#include <cmath>
using namespace std;
#define int long long

vector<int> psum(const vector<int> &arr) {
 vector<int> psums(arr.size() + 1);
 for (int i = 0; i < arr.size(); i++) { psums[i + 1] = psums[i] + arr[i]; }
 return psums;
}

int aceil(int a, int b){
  return ((a+b-1)/b);
}

void solve(){
  int n, x;
  cin >> n >> x;

  vector<int> a(n);
  for(auto& e : a) cin >> e;

  int sum = 0;
  for(auto e : a) sum += e;

  int min = aceil(sum, x);

  int bmax = 0;
  for(auto e : a) bmax += aceil(e, x);

  cout << min << " " << bmax << "\n";

}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}