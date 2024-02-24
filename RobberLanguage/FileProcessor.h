#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H

#include <string>
#include "Translator.h"
#include <iostream>
#include<fstream>
using namespace std;

class FileProcessor {
public:
    FileProcessor(); //  constructor
    ~FileProcessor(); // destructor
    
    void processFile(string input, string output); // Process input txt file and output html
};

#endif 
