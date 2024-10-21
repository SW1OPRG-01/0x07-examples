#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class Car {
  public:
    Car();
    Car(string make, string model, int year);
    string getName() const;
  private:
    string make;
    string model;
    int year;
};

#endif