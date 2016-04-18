//
//  Gloals.h
//  BMBassHead
//
//  Created by Adrian Ortiz on 4/14/16.
//
//

#ifndef Globals_h
#define Globals_h

#include "ofMain.h"
#include "ofxXmlSettings.h"

class Globals {
public:
  Globals();
  void load();

  string id;
  ofTrueTypeFont font;
  ofTrueTypeFont fontLg;

  ofxXmlSettings settings;

  int primaryColor;
};

#endif /* Globals_h */
