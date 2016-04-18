#include "ofApp.h"
//#include "Globals.h"

//--------------------------------------------------------------
void ofApp::setup(){
  //globals.load();

  menuView.init();
}

//--------------------------------------------------------------
void ofApp::update(){
  menuView.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
  menuView.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}
