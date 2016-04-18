//
//  Slider.cpp
//  BassBar
//
//  Created by Adrian Ortiz on 4/12/16.
//
//

#include "Slider.h"
#include "ofApp.h"

Slider::Slider() {
    Slider(0);
}

Slider::Slider(float value) {
    this->value = value;
}

Slider::Slider(int width, int height, float value) {
    this->width = width;
    this->height = height;
    this->value = value;
}

void Slider::draw(int x, int y) {
    ofSetColor(0, 0, 0);
    ofDrawRectangle(x + 0.5, y + 0.5, width, height);

    ofFill();
    ofSetHexColor(ofHexToInt("0x03365f"));
    ofDrawRectangle(x + 0.5, y + 0.5, width * value, height);

    ofSetHexColor(ofHexToInt("0x0672c9"));
    ofNoFill();
    ofDrawRectangle(x + 0.5, y + 0.5, width, height);

    ofFill();
}
