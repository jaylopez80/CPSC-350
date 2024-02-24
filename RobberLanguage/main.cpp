#include "FileProcessor.h"

int main(){
    FileProcessor processorTest; //create an instance of FileProcessor

    processorTest.processFile("randomText.txt", "translatedText.html");
    return 0;
}