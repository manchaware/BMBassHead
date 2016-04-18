//
//  Slider.h
//  BassBar
//
//  Created by Adrian Ortiz on 4/12/16.
//
//

#ifndef Slider_h
#define Slider_h

#include <stdio.h>

class Slider {
public:
    Slider();
    Slider(float);
    Slider(int, int, float);

    void draw(int, int);

    int height = 12;
    int width = 120;
    float value = 0;
private:
};

#endif /* Slider_h */
