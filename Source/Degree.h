#ifndef DEGREE_H
#define DEGREE_H

#ifndef DEBUG_MODE
#include <string>
#endif

const int REQ_MAX = 100;

class Degree{
// Variables
public:
    
private:
    int mUnits_I;
    std::string mRequirements_S[REQ_MAX];
    
// Methods
public:
    Degree(int);
    void setRequirements();
    ~Degree(){};
    
private:
    
};

#endif