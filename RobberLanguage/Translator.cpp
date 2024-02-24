#include "Translator.h"
#include "Model.h"

Translator::Translator(){ //constructor
 } 
Translator::~Translator(){ // destructor
    }


string Translator::translateEnglishWord(string word){

    Model model; //instance of Model class
    string translatedWord; // hold translated words


    for( int i = 0;  i < word.length(); ++i){
        char c = word[i]; 
    
        if(isalpha(c)){  //ensure char is a letter and uppercase
            if(isupper(c)){
                if(model.isVowel(c)){
                   translatedWord += model.translateSingleVowel(c); //preserve case for vowel
                }
                    else{
                        translatedWord += model.translateSingleConsonant(c); 
                        }
            }
            else{
                if (model.isVowel(c)){ //if lowercase
                    translatedWord += model.translateSingleVowel(c);
        }
            else{
                translatedWord += model.translateSingleConsonant(c);
            }
            }
        }           
    }

    return translatedWord;
}



string Translator::translateEnglishSentence(string sentence){
    
    Model model;
    string translatedSentence; // will hold all translated words to form sentences
    string word;
    

    for( int i = 0; i < sentence.length(); ++i){ // iterate through chars in sentence string
        char c = sentence[i]; 

        if(isalpha(c)){ //checks if char is letter or space
            word += c;
        } 
            else{
                
                translatedSentence += translateEnglishWord(word);
                word = ""; // clear word before iterating
                
                translatedSentence += c; //adds punctuation
            }
    }
    return translatedSentence;


}

