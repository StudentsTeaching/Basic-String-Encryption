//
//  encrypter.cpp
//  HelloWorld
//
//  Created by Josiah Turnquist on 11/5/19.
//  Copyright © 2019 NightLabs. All rights reserved.
//

#include "encrypter.hpp"

void encrypt (string& str) {
    for (int i = 0; i < str.length(); ++i) {
        str[i] = str[i] + 1;
    }
    // return str;
}

void decrypt (string& str) {
    for (int i = 0; i < str.length(); ++i) {
        str[i] = str[i] - 1;
    }
    // return str;
}
