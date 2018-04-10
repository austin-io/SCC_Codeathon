#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

#define DEBUG_MODE

#ifndef DEBUG_MODE
#include "Source/Course.h"
#include "Source/Degree.h"
#include "Source/Parser.h"
#include "Source/Utils.h"
#endif

#ifdef DEBUG_MODE
#include "Source/Course.cpp"
#include "Source/Degree.cpp"
#include "Source/Parser.cpp"
#include "Source/Utils.h"
#endif

int main(){
    int temp;
    
    std::cout << "Please input a Student ID number" << std::endl;
    temp = valid<int, std::string>(": W");
    
    FileParser fallFiles("data_files/cisp-fa-20", 10, 18);
    fallFiles.init();
    
    std::cout << "Fall:" << std::endl;
    for(int i = 0; i < 8; i++){
        for(std::string val: fallFiles.classes[i]){
            if(val != ""){
                std::cout << "  -" << val << std::endl;
            }
        }
    }
    
    FileParser springFiles("data_files/cisp-sp-20", 10, 18);
    springFiles.init();
    
    std::cout << "\nSpring:" << std::endl;
    for(int i = 0; i < 8; i++){
        for(std::string val: springFiles.classes[i]){
            if(val != ""){
                std::cout << "  -" << val << std::endl;
            }
        }
    }
    
    FileParser summerFiles("data_files/cisp-su-20", 10, 17);
    summerFiles.init();
    
    std::cout << "\nSummer:" << std::endl;
    for(int i = 0; i < 7; i++){
        for(std::string val: summerFiles.classes[i]){
            if(val != ""){
                std::cout << "  -" << val << std::endl;
            }
        }
    }
    
    Course example(fallFiles.classes[0][0], 90, 4, SCC, Fall);
    
    example.repr();
    
    //std::cin.get();
    
}