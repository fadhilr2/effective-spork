#include "bits/stdc++.h"
using namespace std;
#define int long long

vector<int> psum(const vector<int> &arr) {
 vector<int> psums(arr.size() + 1);
 for (int i = 0; i < arr.size(); i++) { psums[i + 1] = psums[i] + arr[i]; }
 return psums;
}

void solve(){
  int n, a, b;
  cin >> n >> a >> b;
  if(n == 1 || a == b && b == n){
    cout << "Yes\n";
    return;
  }
  int g = a+b;

  if(g > (n-2)){
    cout << "No\n";
  } else{
    cout << "Yes\n";
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