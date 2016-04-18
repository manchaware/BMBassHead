#pragma once

#include "ofMain.h"
#include "MenuView.h"
//#include "Globals.h"

class ofApp : public ofBaseApp {
public:
  void setup();
  void update();
  void draw();

  void keyPressed(int key);
  void keyReleased(int key);

private:
  MenuView menuView;

  //Globals globals;
};
