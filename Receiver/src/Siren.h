
class Alarm {
public: 
  Alarm(int speakerPin);
  ~Alarm();
  void chime();
private:
  int speakerPin;
  
};
