

#ifndef DMN_DATAMANAGER_H
#define DMN_DATAMANAGER_H

#include "Settings.h"
#include "DMN_Compressor.h"
#include "DMN_Cryptography.h"
#include "DMN_DataSourceManager.h"

class DMN_DataManager {

private:
        //XMLDocument doc;
      Settings settings;
//      DMN_DataSourceManager dataSourceManager;
//      DMN_Cryptography coder;
//      DMN_Compressor compressor;
public:
//    DMN_DataManager();
//    // why virtual?
//    virtual ~DMN_DataManager ();
//    // Getters
//
//    DMN_Compressor &getCompressor() {
//        return compressor;
//    }
//    Settings const &getSettings() const {
//        return settings;
//    }
//    // Setters
//    void setCompressor(DMN_Compressor const &compressor) {
//        DMN_DataManager::compressor = compressor;
//    }
//    void setSettings(Settings const &settings) {
//        DMN_DataManager::settings = settings;
//    }
      void hello_world();
      string getDataSourceName();
};

#endif // DMN_DATAMANAGER_H