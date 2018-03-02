#include <iostream>

int addition (int a, int b) // las a son diferentes para cada funcion, para modificar la variable original, cuando se pasa referencia de a (int & a, int b), para no modificarla y solo usarla (const int & a, int b), esto es pasar por valor
{
  int r;
  r=a+b;
  std::cout<< "la direccion de a dentro de la funcion addition es "<< &a<< std::endl;
  
  return r;
}

int main()
{
  int a,b,c;
  a=5;
  b=3;
  c=addition(a,b);
  std::cout<< "la direccion de a dentro de la funcion main es     "<< &a<< std::endl;
  std::cout<< "El resultado es "<< c<< std::endl;


  return 0;
}
