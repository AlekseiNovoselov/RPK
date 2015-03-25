//
// Created by aleksei on 25.03.15.
//

#ifndef _HELLO_WORD_DMN_DATASOURCE_H_
#define _HELLO_WORD_DMN_DATASOURCE_H_

#include "Content.h"

class DMN_DataSource {
private:

public:
    DMN_DataSource ();
    virtual ~DMN_DataSource ();

    virtual Content getContentList (char* uniqueKey);
    int saveContent (Content &content);
};


#endif //_HELLO_WORD_DMN_DATASOURCE_H_
