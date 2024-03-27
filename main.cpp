#include <iostream>
#include "Stack.h"
#include "Converter.h"
#include "CONVERTER2.h"
using namespace std;

int main() {
    int number, base;
    cout << "Enter a number in base 10:" << endl;
    cin >> number;
    
    cout << "Enter the base you want to convert it to:" << endl;
    cin >> base;
    if (base >= 2 && base <= 9)
    {
      Converter Converter;  
      string converted = Converter::convert_from_decimal(number, base);
    cout << "The result of converting " << number << " from base 10 to base " << base << " is " << converted << std::endl;
  
    }

    else if (base > 11 && base < 22)
    {
        CONVERTER2 Converter2;
        string converted = Converter2.to_higher_bases(number, base);
        cout << "The result of converting " << number << " from base 10 to base " << base << " is " << converted << std::endl;
  
    }
     
    

    
    return 0;
}
