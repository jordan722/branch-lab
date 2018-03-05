#include <iostream>
#include "doctest.h"

#include "triangle.h"


using std::string;

string triangle(int height){
  string s = "";
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < i+1; j++) {
      s=s+"*";
    }
    s=s+"\n";
  }
  return s;
}

TEST_CASE("Testing Box"){
  string s = triangle(3);
  CHECK(s=="*\n**\n***\n");
}
