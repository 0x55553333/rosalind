#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <utility>
#include <vector>
#include <memory.h>
using namespace std;
string s;
int main()
{
  cin >> s;
  for(long i = s.size(); i >= 0; --i) {
    switch (s[i]) {
      case 'A': printf("T"); break;
      case 'T': printf("A"); break;
      case 'C': printf("G"); break;
      case 'G': printf("C"); break;
    }
  }
  printf("\n");
  return 0;
}
