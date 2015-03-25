//
// Created by aleksei on 25.03.15.
//

#ifndef _HELLO_WORLD_DMN_CRYPTOGRAPHY_H_
#define _HELLO_WORLD_DMN_CRYPTOGRAPHY_H_

#include "Settings.h"
#include "Content.h"

class DMN_Cryptography {

private:
    char* personCryptographicKey;
    Settings settings;

public:

    int encryption (Content content) {
    }

    int decryption (Content content) {
    }

    char *getPersonCryptographicKey() const {
        return personCryptographicKey;
    }

    void setPersonCryptographicKey(char *personCryptographicKey) {
        DMN_Cryptography::personCryptographicKey = personCryptographicKey;
    }

    Settings const &getSettings() const {
        return settings;
    }

    void setSettings(Settings const &settings) {
        DMN_Cryptography::settings = settings;
    }
};


#endif //_HELLO_WORLD_DMN_CRYPTOGRAPHY_H_
