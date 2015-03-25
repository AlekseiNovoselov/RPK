//
// Created by aleksei on 25.03.15.
//

#ifndef _HELLO_WORD_DATASOURCEMANAGER_H_
#define _HELLO_WORD_DATASOURCEMANAGER_H_

#include "DMN_DataSource.h"

class DMN_DataSourceManager {

private:
    DMN_DataSource dataSources[];

public:
    DMN_DataSourceManager ();
    virtual ~DMN_DataSourceManager ();

    DMN_DataSource getCurrentDataSource (char* uniqueKey);

    void loadDataSource (DMN_DataSource dataSource, char* uniqueKey);

    void initAttributes () ;
};


#endif //_HELLO_WORD_DATASOURCEMANAGER_H_
