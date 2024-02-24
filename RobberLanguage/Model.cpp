#include "Model.h"

Model::Model(){
}

Model::~Model(){
}

string Model::translateSingleConsonant(char cons){
    string encrypted; //hold encrypted chars in robber language rules
    
    if(isalpha(cons)){ //check if character is alphabetic 
        if(isConsonant(cons) ){//check if character is a consonant 
            encrypted += cons;
            encrypted += 'o'; //add filler char per robber language followed by consonant again and add to word
            encrypted += cons;
        }
       
    }
    return encrypted;
}

string Model::translateSingleVowel(char vowel){ 
    string encrypted;
        if(isalpha(vowel)){ //check if char is alphabetic 
            if(isVowel(vowel)){ //check if char is a vowel, then add to encrypted word unchanged
                encrypted += vowel;
            }
        }

    return encrypted;
}
bool Model::isVowel(char letter1){ // returns true if character is a vowel either upper or lowercase
    return(letter1 == 'a' || letter1 == 'e' || letter1 == 'i' || letter1 == 'o' || letter1 == 'u' || letter1 == 'A' || letter1 == 'E' || letter1 == 'I' || letter1 == 'O' || letter1 == 'U');
}

bool Model::isConsonant(char letter2){ //returns true if character is a consonant either upper or lowercase
    return(letter2 != 'a' && letter2 != 'e' && letter2!= 'i' && letter2 != 'o' && letter2 != 'u' && letter2 != 'A' && letter2 != 'E' && letter2 != 'I' && letter2 != 'O' && letter2 != 'U');
    
}