#ifndef COURSE_H
#define COURSE_H

#ifndef DEBUG_MODE
#include <iostream>
#include <string>
#endif

enum Campus{SCC, ARC, FLC, CRC};
enum Term{Fall, Spring, Summer};

const int PREREQ_MAX = 100;

class Course{
// Variables
public:

private:
    std::string mName_S,
                mPrereq_S[PREREQ_MAX];
                
    int mHours_I,
        mCredits_I;
    
    Campus mLocale_C;
    Term mTerm_T;
    
// Methods    
public:
    Course(std::string, int, int, Campus, Term);
    void repr();
    ~Course(){};
    
private:

};

#endif