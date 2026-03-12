#include "bits/stdc++.h"
using namespace std;
#define int long long

vector<int> psum(const vector<int> &arr) {
 vector<int> psums(arr.size() + 1);
 for (int i = 0; i < arr.size(); i++) { psums[i + 1] = psums[i] + arr[i]; }
 return psums;
}

int dx[4] = {1, -1, 1, -1};
int dy[4] = {1, 1, -1, -1};

void solve(){
  int a, b;
  int xk, xq, yk, yq;
  cin >> a >> b;
  cin >> xk >> yk;
  cin >> xq >> yq;

  set<pair<int, int>> kingAttackPos = {};
  set<pair<int, int>> queenAttackPos = {};


  for(int i = 0; i < 4; i++){
    kingAttackPos.insert({xk+dx[i]*a, yk+dy[i]*b});
    queenAttackPos.insert({xq+dx[i]*a, yq+dy[i]*b});
    kingAttackPos.insert({xk+dx[i]*b, yk+dy[i]*a});
    queenAttackPos.insert({xq+dx[i]*b, yq+dy[i]*a});
  }
  
  int ans = 0;
  for(auto e : kingAttackPos){
    auto it = queenAttackPos.find(e);
    if(it != queenAttackPos.end()) ans += 1;
  }

  cout << ans << "\n";
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}