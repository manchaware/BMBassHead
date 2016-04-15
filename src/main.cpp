#include "ofMain.h"
#include "ofApp.h"
#include "ofAppNoWindow.h"

//#define OF_HEADLESS 1

int main( ){
  #ifdef OF_HEADLESS
    ofAppNoWindow w;
    ofSetupOpenGL(&w, 128, 128, OF_WINDOW);
  #else
    ofSetupOpenGL(128, 128, OF_WINDOW);
  #endif

  ofRunApp( new ofApp());
}
