#include "time.h"

Time::Time(int hours, int minutes, int seconds) : _hours(hours),  _minutes(minutes), _seconds(seconds) { }

int Time::getSeconds() const { 
  return _seconds;
}

void Time::setSeconds(int seconds) {
  if(seconds <= 59 && seconds >= 0) {
    _seconds = seconds;
  }
}

int Time::getMinutes() const {
  return _minutes;
}

void Time::setMinutes(int minutes) {
  if(minutes <= 59 && minutes >= 0) {
    _minutes = minutes;
  }
}

int Time::getHours() const {
  return _hours;
}

void Time::setHours(int hours) {
  if(hours <= 24 && hours >=0) {
    _hours = hours;
  }
}

std::string Time::to_string() {
  return pad(_hours, 2) + ":" + pad(_minutes, 2) + ":" + pad(_seconds, 2);
}

std::string Time::pad(int value, int padding) {
  std::string result = std::to_string(value);
  while(result.length() < padding) {
    result = "0" + result;
  }
  return result;
}