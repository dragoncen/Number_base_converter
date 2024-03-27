#ifndef CONVERTER2_H
#define CONVERTER2_H

#include "Stack.h"
#include <string>

class CONVERTER2 {
private:
    std::string library;
    Stack my_arr;

public:
   // CONVERTER2();  // Updated constructor name here
    std::string to_higher_bases(int number, int base);
};

#endif // CONVERTER2_H
