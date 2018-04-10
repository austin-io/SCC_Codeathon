#include "Parser.h"

FileParser::FileParser(std::string pathname, int a, int b)
: mPathname_s(pathname), mStart_I(a), mEnd_I(b){
}

void FileParser::init(){
    
    std::ifstream file;
    int i, 
        j = 0;
    
    while(mStart_I <= mEnd_I){
        
        //file.open("data_files/cisp-fa-2010.txt"); // Example file tree
        file.open(mPathname_s + std::to_string(mStart_I) + ".txt");
        
        if(!file.is_open()){
        
            printf("NOPE\n");
            exit(EXIT_FAILURE);
        
        } else {
        
        i = 0;
        
        while(!file.eof()){
            file >> classes[j][i];
            i++;
        }
        
        file.close();
        j++;
        mStart_I++;
        
        }
    }
}
