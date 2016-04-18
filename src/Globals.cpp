#include "Globals.h"

Globals::Globals() {
}

void Globals::load() {
  font.load("fonts/arial.ttf", 8);
  fontLg.load("fonts/arial.ttf", 10);

  settings.loadFile("config/settings.xml");

  id = settings.getValue("settings:id", "BH");
  primaryColor = ofHexToInt(settings.getValue("settings:primaryColor", "0x0672c9"));
}
