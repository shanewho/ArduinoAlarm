#ifndef SIREN_H
#define SIREN_H

class Siren {
public: 
  Siren(int speakerPin);
  ~Siren();
  void chime();
private:
  int speakerPin;
  
};

#endif
