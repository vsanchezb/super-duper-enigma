#include <iostream>
#include <vector>
#include <cmath>

double prom (const std::vector<double> & m);
double devstd (const std::vector<double> & m, double prom);

int main()
{

}

double prom (const std::vector<double> & m)
{
  double sum=0;
  for(int n=0; n<m; n++)
    {
      sum+=a[n];
    }
  return sum/m;
  
}

double devstd (const std::vector<double> & m)
{
  for(int n=0; n<m; n++)
    {
      sum+=(a[n]-prom)*(a[n]-prom);
    }
  devstd=std::sqrt(sum/(m-1));
}
  
