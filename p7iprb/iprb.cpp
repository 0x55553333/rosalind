#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

double k, m, n, a;
double o;

int main()
{
  cin >> k >> m >> n;
  a = k + m + n;
  o += k/a * (k-1)/(a-1); // all homozygous
  o += k/a * m/(a-1); // hetero/homozygous
  o += k/a * n/(a-1); // all heterozygous
  o += n/a * k/(a-1); // all heterozygous
  o += n/a * m/(a-1) * 0.5; // half heterozygous
  o += m/a * k/(a-1); // hetero/homozygous
  o += m/a * (m-1)/(a-1) * 0.75; // 3/4 heterozygous
  o += m/a * n/(a-1) * 0.5; // half heterozygous
  cout << o << endl;
  return 0;
}

