#ifndef CONVERTER_H
#define CONVERTER_H

#include <string>

class Converter {
public:
    static std::string convert_from_decimal(int number, int base_to_convert);
};

#endif // CONVERTER_H
