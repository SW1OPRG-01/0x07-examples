#include "car.h"

Car::Car() { }

Car::Car(string make, string model, int year) : make(make), model(model), year(year) { }

string Car::getName() const {
  return make + " " + model;
}