#include "bits/stdc++.h"
using namespace std;
#define int long long

vector<int> psum(const vector<int> &arr) {
 vector<int> psums(arr.size() + 1);
 for (int i = 0; i < arr.size(); i++) { psums[i + 1] = psums[i] + arr[i]; }
 return psums;
}

void solve(){
  int a, b, c;
  cin >> a >> b >> c;

  int new_a = (2*b)-c;
  if(new_a % a == 0 && (new_a / a) > 0){
    cout << "YES\n";
    return;
  }

  int new_c = (2*b)-a;
  if(new_c % c == 0 && (new_c / c) > 0){
    cout << "YES\n";
    return;
  }

  int new_b = (a+c)/2;
  if((a+c) % 2 == 0 && new_b % b == 0 && (new_b / b) > 0){
    cout << "YES\n";
    return;
  }

  cout << "NO\n";
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}