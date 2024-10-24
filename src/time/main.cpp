#include <iostream>
#include "time.h"

using namespace std;

int main() {
  Time t = Time(13, 37, 0);
  cout << t.to_string() << endl;
  return 0;
}
