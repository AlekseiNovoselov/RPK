#include <iostream>
#include "DMN_DataManager.h"
#include "tinyxml2.h"

using namespace tinyxml2;

void DMN_DataManager::hello_world() {

    //XMLDocument doc;
    //doc.LoadFile( "dream.xml" );
    std::cout << "Hello, Tatiana! this is success!" << std::endl;
}

string DMN_DataManager::getDataSourceName() {
    return settings.getDataSourceName();
}
