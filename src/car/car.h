#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class Car {
  public:
    Car();
    Car(string make, string model, int year);
    string getName() const;
    string getRegistration() const;
    void setRegistration(string registration);
  private:
    string mMake;
    string mModel;
    string mRegistration;
    int year;
};

#endif