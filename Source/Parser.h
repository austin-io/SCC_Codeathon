#ifndef PARSER_H
#define PARSER_H

#ifndef DEBUG_MODE
#include <fstream>
#include <string>
#endif

const int CLASSES_MAX = 100;

class FileParser{
    public:
        std::string classes[CLASSES_MAX][CLASSES_MAX];
    
    private:
        std::string mPathname_s;
        int mStart_I,
            mEnd_I;
    
    public:
        FileParser(std::string, int, int);
        void init();
        ~FileParser(){};
               
    private:
    
};

#endif