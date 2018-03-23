// la idea de las funciones es hacer las tareas modulares, darle lo minimo posible para realizar la tarea

#include <fstream> // para manejar archivos
#include <iostream> 
#include <string>  

void printnumbers(int max,std::string nombre);

int main()
{
  printnumbers(100,"datosfout.txt");
  printnumbers(200,"datosfout2.txt");
  return 0;
}

void printnumbers(int max,std::string nombre) // para que reciba strings dentro de la funcion, usar std=c+11
{
  std::ofstream fout(nombre); // escribir en un archivo
  for(int i=1;i<=max;i++)
    {
      fout<< i << "\t" << 1.0/i<< std::endl;
    }
  fout.close(); //para poder usar fout en otras funciones
}
