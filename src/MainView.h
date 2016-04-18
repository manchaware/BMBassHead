//
//  MainView.h
//  BMBassHead
//
//  Created by Adrian Ortiz on 4/12/16.
//
//

#ifndef MainView_h
#define MainView_h

#include "BMView.h"
#include "Globals.h"
#include <map>

class MainView : public BMView {
public:
    MainView();

    void draw();
    void update();
};

#endif /* MainView_h */
