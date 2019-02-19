#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <utility>
#include <vector>
#include <memory.h>
using namespace std;

string x, y;
unsigned long long h;
int main()
{ cin >> x >> y;
  for(size_t i = 0; i < x.size(); ++i) 
    if (x[i] != y[i]) ++h;
  cout << h << endl;
  return 0;
}
