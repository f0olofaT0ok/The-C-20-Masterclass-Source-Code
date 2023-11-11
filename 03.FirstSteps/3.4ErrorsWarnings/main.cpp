#include <iostream>

int main()
{
    std::cout << "Hello World!" << std::endl;

    //Run time error
    int value = 7/0;
    std::cout << "value: " << value << std::endl;

    return 0;
}

/*
Compile Time Errors
Runtime Errors
Warnings
*/

/*int main(){
    Compile time error
    std::cout << "Hello World in C++20!" << std::endl
    return 0;
    }*/

    /*
    Runtime errors are logic errors that can lead to a crash
    or just incorrect results
    */
/*int main(int argc, char **argv)
{
    //Compiler warnings are not serious enough to stop the program
    //however a warning will still appear
    std::cout << "Hello World in C++20!" << std::endl;
    return 0;
}*/

