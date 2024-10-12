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