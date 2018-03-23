#include <fstream> // para manejar archivos
#include <iostream> 

void printnumbers(int max);

int main()
{
  printnumbers(100);
  return 0;
}

void printnumbers(int max)
{
  std::ofstream fout("datosfout.txt"); // escribir en un archivo
  
  for(int i=1;i<=max;i++)
    {
      fout<< i << "\t" << 1.0/i<< std::endl;
    }
  fout.close(); //para poder usar fout en otras funciones
}
