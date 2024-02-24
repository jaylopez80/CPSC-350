#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include<string>
using namespace std;

class Translator{

public:
    Translator(); //constructor
    ~Translator(); //destructor

    string translateEnglishWord(string word); // adds robber langauage translated word
    string translateEnglishSentence(string sentence); //adds translated words to sentence
};


#endif