#pragma once

#include "ofMain.h"
//#include "MainView.h"
//#include "Globals.h"

class ofApp : public ofBaseApp {
public:
  void setup();
  void update();
  void draw();

  void keyPressed(int key);
  void keyReleased(int key);

private:
  //MainView mainView;

  //Globals globals;
};
