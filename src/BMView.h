//
//  BMView.h
//  BMBassHead
//
//  Created by Adrian Ortiz on 4/12/16.
//
//

#ifndef BMView_h
#define BMView_h

#include "Globals.h"

class BMView {
public:
    void load(Globals);
    void draw();
    void update();

    Globals globals;
};

#endif /* BMView_h */
