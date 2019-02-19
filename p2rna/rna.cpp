#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>
#include <memory.h>
using namespace std;
string s;
int main()
{
  cin >> s;
  for(size_t i = 0; i < s.size(); ++i) {
    if (s[i] == 'T') s[i] = 'U';
  }
  cout << s << endl;
  return 0;
}

