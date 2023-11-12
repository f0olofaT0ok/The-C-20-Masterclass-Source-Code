#include <iostream>


int main(){

    char character1 {'a'}; 
    char character2 {'r'};
    char character3 {'r'};
    char character4 {59};
    char character5 {65}; 

    std::cout << "Character 1 : " << character1 << std::endl;
    std::cout << "Character 2 : " << character2 << std::endl;
    std::cout << "Character 4 : " << character4 << std::endl;
    std::cout << "Character 5 : " << character5 << std::endl;
    
    std::cout << "size of a char : " << sizeof(char) << std::endl;

    char value = 65;
    std::cout << "value : " << value << std::endl;
    std::cout << "value(int) : " << <int>(value) << std::endl;

    return 0;
}