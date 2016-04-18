//
//  Util.h
//  BassBar
//
//  Created by Adrian Ortiz on 4/6/16.
//
//

#ifndef _Util_H
#define _Util_H

#include "ofApp.h"
#include <string.h>

class Util {
public:
  static string classify(string);
  static string replace(string, string, string);
  static string toUpperCase(string);
  static string strip(string, string);
};

string Util::strip(string str, string needle) {
  return Util::replace(str, needle, "");
}

string Util::classify(string str) {
  str = Util::strip(str, "_");
  str = Util::strip(str, "-");
  str = Util::strip(str, " ");

  return str;
}

string Util::replace(string str, string oldStr, string newStr) {
  size_t pos = 0;

  while((pos = str.find(oldStr, pos)) != std::string::npos){
    str.replace(pos, oldStr.length(), newStr);
    pos += newStr.length();
  }

  return str;
}

string Util::toUpperCase(string str) {
  string strUpper = "";

  for( int i=0; i<str.length(); i++ ) {
      strUpper += toupper(str[i]);
  }

  return strUpper;
}

#endif /* Util_h */
