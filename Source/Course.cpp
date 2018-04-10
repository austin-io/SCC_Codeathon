#include "Course.h"

Course::Course(std::string s, int a, int b, Campus c, Term t)
: mName_S(s), mHours_I(a), mCredits_I(b), mLocale_C(c), mTerm_T(t){
    
}

void Course::repr(){
    std::cout << mName_S << std::endl
              << mHours_I << std::endl
              << mCredits_I << std::endl
              << mLocale_C << std::endl
              << mTerm_T << std::endl;
}