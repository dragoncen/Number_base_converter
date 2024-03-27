#include "Stack.h"
#include <iostream>

Stack::Stack() : top(-1), arr(100, 0) {}

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
