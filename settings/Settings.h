#ifndef _HELLO_WORD_SETTINGS_H_
#define _HELLO_WORD_SETTINGS_H_
#include <iostream>
#include <string>
#include "tinyxml2.h"

using namespace tinyxml2;
using namespace std;

class Settings {
public:
    string dataSourceName;
    string getDataSourceName();
    void parceXml();
};


#endif //_HELLO_WORD_SETTINGS_H_
