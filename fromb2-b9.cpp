#include "Stack.h"
#include <iostream>

bool Stack::is_empty() {
    return top == -1;
}

void Stack::push(int element) {
    top++;
    arr[top] = element;
}

int Stack::pop() {
    if (is_empty()) {
        std::cout << "Stack is empty" << std::endl;
        return -1;
    }
    int popped_element = arr[top];
    top--;
    return popped_element;
}

int Stack::peek() {
    if (is_empty()) {
        std::cout << "Stack is empty" << std::endl;
        return -1;
    }
    return arr[top];
}

void Stack::reverse() {
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] == 0) {
            continue;
        }
        std::cout << arr[i] << std::endl;
    }
}

std::string Converter::convert_from_decimal(int number, int base_to_convert) {
    Stack my_arr;
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

#include <iostream>
#include "Stack.h"

int main() {
    int number, base;
    std::cout << "Enter a number in base 10:" << std::endl;
    std::cin >> number;
    
    std::cout << "Enter the base you want to convert it to:" << std::endl;
    std::cin >> base;

    std::string converted = Converter::convert_from_decimal(number, base);
    std::cout << "The result of converting " << number << " from base 10 to base " << base << " is " << converted << std::endl;

    return 0;
}
