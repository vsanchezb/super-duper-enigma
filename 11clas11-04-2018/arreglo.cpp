#include <iostream>
#include <vector>
#include <cmath>

int main()
{
  const int m=10;
  std::vector<double> a(m);
  for(int n=0; n<m; n++)
    {
      a[n]=1;
    }
  
  double prom=0;
  double sum=0;
  double devstd=0;

  for(int n=0; n<m; n++)
    {
      prom+=a[n];
    }
  prom=prom/m;
  std::cout<<"promedio = "<< prom<< std::endl;
  
  for(int n=0; n<m; n++)
    {
      sum+=(a[n]-prom)*(a[n]-prom);
    }
  devstd=std::sqrt(sum/(m-1));
  std::cout<<"desviacion estandar = "<< devstd << std::endl;
  return 0;
}
