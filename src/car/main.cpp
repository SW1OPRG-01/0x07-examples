#include <iostream>
#include "car.h"

using namespace std;

int main(int argc, char *argv[]) {
  
  Car mercedes = Car("Mercedes", "EQB", 2024);
  Car bmw = Car("BMW", "i4 M50", 2023);
  Car volkswagen = Car("Volkswagen", "Golf Variant", 2015);

  cout << mercedes.getName() << endl;
  cout << bmw.getName() << endl;
  cout << volkswagen.getName() << endl;

  return 0;
}