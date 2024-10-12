#include <iostream>
#include "time.h"

using namespace std;

int main() {
  Time t = Time(13, 37, 0);
  cout << t.display() << endl;
  return 0;
}
