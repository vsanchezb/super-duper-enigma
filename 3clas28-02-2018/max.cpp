//pide dos enteros y muestra el mayor 

#include <iostream>

int max (int a,int b)
{
  int r=a;
  
  if (b>=a)
    {
      r=b;
    }


  return r;
}

int main()
{
  int a=0;
  int b=0;
  std::cout << "\n Introduce 2 numeros \n"<< std::endl;
  std::cin>>a;
  std::cin>>b;
  std::cout << "\n El mayor es "<< max(a,b)<< std::endl;
 
  return 0;
}
