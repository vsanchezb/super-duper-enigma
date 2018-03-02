#include <iostream>
#include <string>

int holafun (std::string you)
{
  std::cout << "\n ¿Who are you? \n"<< std::endl;
  std::cin>>you;
  std::cout << "\n Hello " << you <<"!\n" << std::endl;
  return 0;
}

int main(void)
{
  std::string name;
  holafun(name);
    
  return 0;
}
