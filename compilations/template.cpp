/*Toda linea comenzada con # es una derectiva del preprocesador cuya funcion es incluir las librerias que contienen los codigos basicos*/

#include <iostream> /* iostream es el acronimo de in/out stream, o flujo de entrada y salida de datos, e incluye los objetos cin para entrada, cout para salida, cerr para error no almacenado y clog para error almacenado. Ademas incluye una lista de variables y constantes*/

#include <cmath> /*incluye funciones basicas como trigonometricas, logaritmicas y exponencial*/

#include <cstdio> /*incluye el archivo de cabecera(?) que contiene las definiciones de las macros, las constantes, las declaraciones de funciones de la biblioteca estándar */

using namespace std; /*esta linea sirve para que las palabras reservadas para ciertos objetos puedan ser usadas sin declararla con  std::<palabra>*/

int main(void)

{
  std::cout.precision(16); /*detemina la presicion con la cual se dan los numeros*/

  std::cout.setf(std::ios::scientific);/*establece que se use notacion cientifica*/

  cout<< M_PI<< endl;

  double m=4*M_PI;

  std::printf("%25.16le\t%25.16le\n",m,M_PI);/*para escribir el valor de una variable en printf se escribe %<espacios que debe ocupar>.<numerodedecimales>le y las letras l y e especifican presicion y notacion cientifica respectivamente*/

  /*\t tab y \n otra linea*/

  //  std::cerr << "ERROR ERROR\n"; //codigo 2 (?)
  
  return 0;
}
