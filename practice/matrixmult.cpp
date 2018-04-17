#include <iostream>
#include <cmath>
#include <vector>

using func=double(double);

void fill(std::vector<double> &x,int n,int m,func f);
double f1(double x);
double f2(double x);
std::vector<double> mult (std::vector<double> &a,int fa,int ca,std::vector<double> &b,int fb,int cb);
void printm(std::vector<double> &x,int n,int m,func f);

int main()
{
  int fa=2; //filas de a
  int ca=2; //columnas de a
  int fb=ca; //filas de b
  int cb=2;  //columnas de b
 
  std::vector<double> a(fa*ca);
  std::vector<double> b(fb*cb);
  std::vector<double> ab(fa*cb);
  
  fill(a,fa,ca, f1);
  fill(b,fb,cb, f2);

  ab=mult(a,fa,ca,b,fb,cb);
  printm();
  printm();
  printm();
  return 0;
}
