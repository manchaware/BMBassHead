#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  loadSettings();
}

//--------------------------------------------------------------
void ofApp::update(){
  mainView.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
  mainView.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

void ofApp::loadSettings() {
  settings.loadFile("config/settings.xml");
  string id = settings.getValue("settings:id", "BH");
  ofLog() << id;
}
