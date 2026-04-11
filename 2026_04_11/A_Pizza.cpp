/*
  author: SidnyTech
  Name: Sidney A. Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
  int n, s = 0, m = 0, l = 0, x;
  string t;
  cin >> n;
  while (n--) {
    cin >> t >> x;
    if (t == "S")
      s += x;
    else if (t == "M")
      m += x;
    else
      l += x;
  }

  int s_pack = (s + 5) / 6;
  int m_pack = (m + 7) / 8;
  int l_pack = (l + 11) / 12;

  cout << s_pack + m_pack + l_pack << endl;
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