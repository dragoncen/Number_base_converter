#include "Stack.h"
#include "Converter.h"
#include <iostream>

std::string Converter::convert_from_decimal(int number, int base_to_convert) {
    static Stack my_arr;
    int remainder = 0;

    while (number > 0) {
        if (2 <= base_to_convert && base_to_convert <= 9) {
            remainder = number % base_to_convert;
            my_arr.push(remainder);
            number /= base_to_convert;
        } else {
            std::cout << "You are out of range" << std::endl;
            continue;
        }
    }

    std::string result = "";
    while (!my_arr.is_empty()) {
        int digit = my_arr.pop();
        result += std::to_string(digit);
    }

    return result;
}
