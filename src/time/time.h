#ifndef TIME_H
#define TIME_H

#include <string>

class Time {
  public:
    Time(int hours, int minutes, int seconds);
    int getSeconds() const;
    void setSeconds(int seconds);
    int getMinutes() const;
    void setMinutes(int minutes);
    int getHours() const;
    void setHours(int hours);
    std::string to_string();
  private:
    int _hours;
    int _minutes;
    int _seconds;
    std::string pad(int value, int padding);
};

#endif