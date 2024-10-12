#include "time.h"

Time::Time(int hours, int minutes, int seconds) : _hours(hours),  _minutes(minutes), _seconds(seconds) { }

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

int Time::getHours() {
  return _hours;
}

void Time::setHours(int hours) {
  _hours = hours;
}

std::string Time::display() {
  
  return pad(_hours, 2) + ":" + pad(_minutes, 2) + ":" + pad(_seconds, 2);
}

std::string Time::pad(int value, int padding) {
  std::string result = std::to_string(value);
  while(result.length() < padding) {
    result = "0" + result;
  }
  return result;
}