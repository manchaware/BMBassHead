//
//  MainView.cpp
//  BassBar
//
//  Created by Adrian Ortiz on 4/6/16.
//
//

#include "ofMain.h"
#include "MainView.h"
#include "Util.h"

MainView::MainView() {
}

void MainView::draw() {
  ofSetColor(0, 0, 0);
  ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());

  ofSetColor(255, 255, 255);
  globals.font.drawString(Util::toUpperCase("Hello!"), 8, 13);
  globals.fontLg.drawString(Util::toUpperCase("Hello!"), 8, 30);
}

void MainView::update() {

}
