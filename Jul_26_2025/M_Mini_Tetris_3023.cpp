// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int a, b, c, ancho;
  cin >> a >> b >> c;

  if (c % 2 != 0)
    c--;
  if (c == 0)
    b = 0;

  ancho = (a * 2) + ((c / 2) * 3) + (2 * b);

  cout << ancho << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/