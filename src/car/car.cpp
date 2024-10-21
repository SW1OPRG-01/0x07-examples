#include "car.h"

Car::Car() { }

Car::Car(string make, string model, int year) : make(make), model(model), year(year) { }

string Car::getName() const {
  return make + " " + model;
}

string Car::getRegistration() const {
  return registration;
}

void Car::setRegistration(string registration) {
  this->registration = registration;
}