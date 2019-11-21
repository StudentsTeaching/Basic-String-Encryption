//
//  main.cpp
//  HelloWorld
//
//  Created by Josiah Turnquist on 9/19/19.
//  Copyright © 2019 NightLabs. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>
#include "encrypter.hpp"
using namespace std;


int main(int argc, const char * argv[]) {
    // define new string to store input
    string input;
    
    // Prompt for an input to encrypt
    cout << "Enter an input you want encrypted: ";
    getline(cin, input);
    
    // call encryption function & print encrypted string
    encrypt(input);
    cout << "Encrypted string: " << input << endl;
    
    // decrypt the same string and print it again
    decrypt(input);
    cout << "Decrypted string: " << input << endl;
    
    
    // end program
    return 0;
}
