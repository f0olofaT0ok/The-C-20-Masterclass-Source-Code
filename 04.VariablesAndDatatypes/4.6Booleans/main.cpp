#include <iostream>


int main(){

    bool red_light {false};
    bool green_light {true};

    if(red_light == true){
        std::cout << "Stop!" << std::endl;
    }else{
        std::cout << "Go through!" << std::endl;
    }

    if(green_light){
        std::cout << "The light is green!" << std::endl;
    }else{
        std::cout << "The light is NOT green!" << std::endl;
    }
    
    std::cout << "The size of a boolean is : " << sizeof(bool) << " byte" << std::endl;

    std::cout << "red light is " << red_light << std::endl;
    std::cout << "green light is " << green_light << std::endl;

    return 0;
}