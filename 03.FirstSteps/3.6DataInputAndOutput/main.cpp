#include <iostream>
#include <string>

int main()
{
  int age;
  std::string name;
  std::string full_name;

  std::cout << "Please type in your fullname name and age : ";
  
  //spaces will make this code not work e.g. "William Foreman" instead of "Foreman 21"
  //std::cin >> name >> age;  
  //The code below fixes this issue
  std::getline(std::cin,full_name);
  std::cin >> age; 

  std::cout << "Hello " << full_name << "! You are " << age << " years old" << std::endl;

  std::cerr << "Error mesage : Something is wrong" << std::endl;
  std::clog << "Log message : Somethign happened " << std::endl;


  return 0;
}