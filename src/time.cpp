#include "time.h"

int Time::getSeconds() { 
  return _seconds;
}

void Time::setSeconds(int seconds) {
  _seconds = seconds;
}

int Time::getMinutes() {
  return _minutes;
}

void Time::setMinutes(int minutes) {
  _minutes = minutes;
}

