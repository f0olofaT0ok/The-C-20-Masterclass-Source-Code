#include <iostream>

int main(){

    // int value{5};

    // value = value + 1;
    // std::cout << "The valeu is : " << value << std::endl; 

    //https://en.cppreference.com/w/cpp/language/operator_precedence

    // Testing prefix and postfix increments
    int value = {5};

    std::cout << "The value is : " << ++value << " then the value is " << value << std::endl;
    value = {5};

    std::cout << "The value is : " << value++ << " then the value is " << value << std::endl;
    value = {5};

    std::cout << "The value is : " << --value << " then the value is " << value << std::endl;
    value = {5};

    std::cout << "The value is : " << value-- << " then the value is " << value << std::endl;
    return 0;
}