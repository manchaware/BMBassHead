#pragma once

#include "ofMain.h"
#include "ofxXmlSettings.h"
#include "MainView.h"

class ofApp : public ofBaseApp {
public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);

private:
	void loadSettings();
	ofxXmlSettings settings;

	MainView mainView;
};
