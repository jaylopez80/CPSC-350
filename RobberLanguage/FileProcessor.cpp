#include "FileProcessor.h"

FileProcessor::FileProcessor(){

}
FileProcessor::~FileProcessor(){

}

void FileProcessor::processFile(string input, string output){
    Translator translator;  

    ifstream inFile(input); //reads from a input file 
    ofstream outFile(output); // outputs/writes to file

    if (!inFile){// check if input file was opened
        cerr<< "Error: Unable to open file." << endl;
        return;
    }
    if(!outFile){ //check if outfile is created
        cerr<<"Error: Unable to create file." << endl;
        inFile.close();
        return;
    }
    string line; //holds all text from file
    while(getline(inFile,line)){//go through each line from input file until end of text
        string robberSentence = translator.translateEnglishSentence(line); //translate text to robber language

        outFile << "<h1> Robber Language Translation</h1>" << endl;
        outFile << "<b>" << line << "</b><br>" << endl; //original text bolded
        outFile << "<br>"; //adds break
        outFile << "<i>" << robberSentence << "</i><br><br>" << endl; //translated text italicised
    }
    inFile.close(); //close input and output files
    outFile.close();
}
