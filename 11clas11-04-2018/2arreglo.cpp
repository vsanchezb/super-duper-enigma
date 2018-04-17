#include <iostream>
#include <vector>
#include <cmath>

void fill(std::vector<double> & a, int m);
double prom (const std::vector<double> & a, int m);
double devstd (const std::vector<double> & a,int m, double prom);

int main()
{
  const int m=10;
  
  std::vector<double> a(m);
  fill(a,m);
  double avg=prom(a,m);
  std::cout<<"promedio = "<< avg << std::endl;
  std::cout<<"desviacion estandar = "<< devstd(a,m,avg) << std::endl;
  return 0;
}

void fill(std::vector<double> & a, int m)
{
  for(int n=0; n<m; n++)
    {
      a[n]=n+1;
    }

}

double prom (const std::vector<double> & a,int m)
{
  double sum=0;
  for(int n=0; n<m; n++)
    {
      sum+=a[n];
    }
  return sum/m;
  
}

double devstd (const std::vector<double> & a,int m, double prom)
{
  double sum=0;
  for(int n=0; n<m; n++)
    {
      sum+=(a[n]-prom)*(a[n]-prom);
    }
  return std::sqrt(sum/(m-1));
}

