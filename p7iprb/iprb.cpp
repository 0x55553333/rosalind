#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

double k, m, n, all;
double o;

int main()
{
  cin >> k >> m >> n;
  all = k + m + n;
  // case I: dominant + dominant
 o += k / all * (k-1)/all;
  // case II: dominant + het
  o += (k/all * m/all);
  // case III: het + het
  o += (m/all * (m-1)/all)*0.75;
  // case IV: het + rec
  o += (m/all * n/all)*0.5;
  // case V: dominant + rec
  o += (k/all * n/all);
  // case VI: rec + rec
  // nope
  cout << o << endl;
  return 0;
}
