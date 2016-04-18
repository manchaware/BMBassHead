//
//  MenuView.h
//  BassBar
//
//  Created by Adrian Ortiz on 4/6/16.
//
//

#ifndef MenuView_h
#define MenuView_h

#include <map>

class MenuView {
public:
    MenuView();

    void init();
    void update();
    void draw();
    void next();
    void prev();
    void select();

    const string MUSIC = "music";
    const string DIRECTORY = "directory";

private:
    void loadDirectoryToXML(string);
    void parseXML();

    vector <string> getLabels();
    vector <string> labels;

    int width;
    int height;

    ofXml xml;
    int level = 0;

    int selectedIndex = 0;
    int currentNodeChildCount = 0;
    bool isCurrentRoot = true;
};

#endif /* Menu_h */
