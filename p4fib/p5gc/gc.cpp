#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <utility>
#include <vector>
#include <memory.h>
using namespace std;

string s, s1, y, yp;
long long cnt;
vector< pair<double, string> > gc_contents;
int main()
{ int f;
  cin >> s;
  while (1) {
    f = 0;
    y.clear();
    while (cin >> yp) {
      if (yp[0] != '>') 
        y += yp;
      else {
        f = 1; s1 = yp; break;
      }
    }
    cnt = 0;
    for(size_t i = 0; i < y.size(); ++i) 
      if (y[i] == 'G' || y[i] == 'C') ++cnt;
//    cout << s << ": " << cnt << " " << y.size() << " " << (double)(cnt)/(double)(y.size())*100.0 << endl;
    gc_contents.push_back( make_pair(
          ((double) cnt / (double) y.size())
          * (double)100.0, s));
    if (!f) break;
    s = s1;
  }
  sort(gc_contents.begin(), gc_contents.end());
  cout << gc_contents[gc_contents.size()-1].second.substr(1) << endl;
  cout << gc_contents[gc_contents.size()-1].first << endl;
  return 0;
}

