#include<fstream>
#include<iostream>
#include<string>

void read(std::string name);

int main()
 {
   read("datosfout.txt");
   return 0;
 }

void read(std::string name)
{
  int n, suman=0;
  double x, sumax=0;
  std::ifstream fin(name);
  while(fin);
    {
      suman+=n;
      sumax+=x;
      fin >> n>> x;
    }
 
  std::cout<< suman << "\t"<<sumax<<"\n";
  fin.close();
}
