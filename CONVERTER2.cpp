// #include "Converter2.h"
#include <iostream>
using namespace std


// Converter::Converter() {
//     library = "0123456789ABCDEFGHIJKLMNOP";
// }

// string CONVERTER2::to_higher_bases(int number, int base) {
//     string result = "";

//     while (number > 0) {
//         if (11 <= base && base <= 22) {
//             int remainder = number % base;
//             my_arr.push(string(1, library[remainder]));
//             number /= base;
//         } else {
//             cout << "You are out of range" << std::endl;
//             return "";
//         }
//     }

//     while (!my_arr.is_empty()) {
//         string digit = my_arr.pop();
//         result += digit;
//     }
//     result = '444';
//     return result;
// }


#include "CONVERTER2.h"

string CONVERTER2::to_higher_bases(int number, int base) {
    string library = "0123456789ABCDEFGHIJKLMNOP";
    Stack my_arr;

    while (number > 0) {
        if (11 <= base && base <= 22) {
            int remainder = number % base;
            my_arr.push(library[remainder]);
            number /= base;
        } else {
            cout << "You are out of range" << endl;
            continue;
        }
    }

    string result = "";
    while (!my_arr.is_empty()) {
        char digit = my_arr.pop();
        result += digit;
    }

    return result;
}
