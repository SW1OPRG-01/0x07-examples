#include "car.h"

Car::Car() {
  make = "";
  model = "";
  year = 0;
}

Car::Car(string make, string model, int year) : make(make), model(model), year(year) { }

string Car::getName() const {
  return make + " " + model;
}

string Car::getRegistration() const {
  return registration;
}

void Car::setRegistration(string registration) {
  for(int i = 0; i < registration.size(); i++) {
    char alphanumeric = registration.at(i);
    if(i == 0 || i == 1) {
      if(alphanumeric <= 'A' || alphanumeric > 'Z') {
        return;
      }
    } else if(alphanumeric < '0' || alphanumeric > '9') {
      return;
    }
  }
  this->registration = registration;
}