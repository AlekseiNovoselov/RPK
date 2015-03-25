//
// Created by aleksei on 25.03.15.
//

#include "DMN_DataSourceManager.h"

void DMN_DataSourceManager::loadDataSource(DMN_DataSource dataSource, char *uniqueKey) {

}

void DMN_DataSourceManager::initAttributes() {

}

DMN_DataSourceManager::DMN_DataSourceManager() {

}

DMN_DataSourceManager::~DMN_DataSourceManager() {

}

DMN_DataSource DMN_DataSourceManager::getCurrentDataSource(char *uniqueKey) {
    return dataSources[0];
}
