#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "triangle.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
  string s;

  s = triangle(3);
  cout << s << endl;
  return 0;
}
