class Time {
  public:
    int getSeconds();
    void setSeconds(int seconds);
    int getMinutes();
    void setMinutes(int minutes);
    int getHours();
    void setHours(int hours);
  private:
    int hours;
    int minutes;
    int seconds;  
};