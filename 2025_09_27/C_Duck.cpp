/*
  author: SiAn01 / SidnyTech
  Name: Sidney A. Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

void solve() {
  int n, total = 0, mayor = 0;
  cin >> n;
  vector<int> a(n);

  for (int &x : a) {
    cin >> x;
    total += x;
    mayor = max(mayor, x);
  }
  total = total / 3;
  if (mayor > total)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
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