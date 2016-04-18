//
//  MenuView.cpp
//  BassBar
//
//  Created by Adrian Ortiz on 4/6/16.
//
//

#include "ofMain.h"
#include "MenuView.h"
#include "Util.h"

MenuView::MenuView() {
}

void MenuView::init() {
  this->width = 120;
  this->height = 18;

  if(!xml.load("conf/menus.xml")){
    ofLogError() << "Unable to open menus.xml";
  }

  isCurrentRoot = true;
  xml.setAttribute("data-root", "true");
}

void MenuView::update() {

}

void MenuView::draw() {

}
