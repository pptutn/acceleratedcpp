#include <iostream>
#include <string>

int main(){
  std::cout << "Please enter your first name: ";
  
  // read the name
  std::string name; // define the nane
  std::cin >> name; // read into note that the arrows point the othe rdirection, we are reading in the variable
  
  // write a greetingh
  std::cout << "Hello, " << name << "!" << std::endl;
  return 0;
}

// when we ask the library to read in a string, it discards anything after the first space
// e.g when i typed in "philly ttt" for my name it simply returned Hello, philly!
