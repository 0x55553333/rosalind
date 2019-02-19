#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <utility>
#include <vector>
#include <memory.h>
using namespace std;

long long a, g, c, t;
string s;

int main()
{
  cin >> s;
  for(size_t i = 0; i < s.size(); ++i) 
    switch (s[i]) {
      case 'A': ++a; break;
      case 'G': ++g; break;
      case 'C': ++c; break;
      case 'T': ++t; break;
    }
  printf("%lld %lld %lld %lld\n", 
      a, c, g, t);
  return 0;
}

