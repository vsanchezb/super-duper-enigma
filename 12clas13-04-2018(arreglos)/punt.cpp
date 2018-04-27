#include <iostream>

int main()
{
  int x=75;
  int * pun =nullptr; //simpre que no se le asigne algo a un puntero inicializarlo en nullptr (c++11)
  pun= &x;
  std::cout<< x << std::endl;
  std::cout<< &x << std::endl;
  std::cout<< *pun << std::endl;
  std::cout<< pun << std::endl;
  std::cout<< &pun << std::endl;
  return 0;
}
