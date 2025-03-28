#include "car.h"

Car::Car() {
  make = "";
  model = "";
  year = 0;
}

Car::Car(string ma, string mo, int y) { 
  make = ma;
  model = mo;
  year = y;
}

string Car::getName() const {
  return make + " " + model;
}

string Car::getRegistration() const {
  return registration;
}

void Car::setRegistration(string regnum) {
  for(int i = 0; i < regnum.size(); i++) {
    char alphanumeric = regnum.at(i);
    if(i == 0 || i == 1) {
      if(alphanumeric <= 'A' || alphanumeric > 'Z') {
        return;
      }
    } else if(alphanumeric < '0' || alphanumeric > '9') {
      return;
    }
  }
  registration = regnum;
}