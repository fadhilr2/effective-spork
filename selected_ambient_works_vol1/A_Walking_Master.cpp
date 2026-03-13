#include "bits/stdc++.h"
using namespace std;
#define int long long

vector<int> psum(const vector<int> &arr) {
 vector<int> psums(arr.size() + 1);
 for (int i = 0; i < arr.size(); i++) { psums[i + 1] = psums[i] + arr[i]; }
 return psums;
}

void solve(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if(d < b){
    cout << -1 << "\n";
    return;
  }

  int k = abs(d-b);
  int new_a = a+k;
  if(new_a < c){
    cout << -1 << "\n";
    return;
  }
  int ops = k + abs(new_a-c);

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