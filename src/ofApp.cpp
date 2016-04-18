#include "ofApp.h"
#include "Globals.h"

//--------------------------------------------------------------
void ofApp::setup(){
  globals.load();

  mainView.load(globals);
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
