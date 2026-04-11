/*
  author: SiAn01 / SidnyTech
  Name: Sidney A. Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

void solve() {
  int p, x, ans = 0;
  cin >> p;

  while (p--) {
    cin >> x;
    if (x % 2 != 0)
      ans++;
  }
  cout << ans << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/