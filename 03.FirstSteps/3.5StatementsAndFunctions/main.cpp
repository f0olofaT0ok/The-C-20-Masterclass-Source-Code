#include <iostream>
#include <math.h>
// Functions must be declared before main()
int addNumber(int first_number, int second_number){ 
    int sum = first_number + second_number;
    return sum;
}



int main(int argc, char **argv)
{
    // These two lines are equivalent
    int firstNumber {12}; 
    int secondNumber = 9;
    int sum = firstNumber + secondNumber;

    int functionsum = addNumber(12, 9);

    std::cout << "The sum of the two numbers is: " << sum << std::endl;
    std::cout << "The sum of the two numbers is: " << functionsum << std::endl;

    std::cout << "Sum : " << addNumber(3,42) << std::endl;
    return 0;
}
