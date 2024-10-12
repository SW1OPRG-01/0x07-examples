#ifndef TIME_H
#define TIME_H

class Time {
  public:
    Time(int hours, int minutes, int seconds);
    int getSeconds();
    void setSeconds(int seconds);
    int getMinutes();
    void setMinutes(int minutes);
    int getHours();
    void setHours(int hours);
  private:
    int _hours;
    int _minutes;
    int _seconds;  
};

#endif