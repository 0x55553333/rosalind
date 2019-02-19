#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <utility>
#include <memory.h>
using namespace std;

int n, k;

unsigned long long f[100];

int main()
{ cin >> n >> k;
  f[0] = 0;
  f[1] = 1;
  f[2] = 1;
  for(int i= 3; i <= n; ++i) 
    f[i] = f[i-1] + f[i-2] * k;
  printf("%llu\n", f[n]);
  return 0;
}

