#ifndef STACK_H
#define STACK_H

#include <vector>
#include <string>

class Stack {
private:
    int top;
    std::vector<int> arr;

public:
    Stack();
    bool is_empty();
    void push(int element);
    int pop();
    int peek();
    void reverse();
};


#endif // STACK_H
