#ifndef MODEL_H
#define MODEL_H

#include <string>
using namespace std;

class Model {

public:
    Model(); //  constructor
    ~Model(); // destructor

    string translateSingleConsonant(char cons); //translate singel consonant
    string translateSingleVowel(char vowel); // translate single vowel
    bool isVowel(char letter1); //return true if vowel
    bool isConsonant(char letter2); //return true if consonants

};

#endif
