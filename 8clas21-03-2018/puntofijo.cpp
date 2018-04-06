#include <iostream>
#include  <cmath>

using func=double(double);

double punfij(double a,double eps, int i, func fu);
double f(double x);
int main()
{
  std::cout.precision(16);
  double x=punfij(10,1e-9,1000,f);
  std::cout<<x<<"\n"<<f(x)<<"\n"; 
  
}

double f(double x)
{

  return (9.81*68.1/x)*(1-std::exp(-x*10/68.1))-40;
}
 
double punfij(double a,double eps, int i, func fu)
{
  double x=(1-std::exp(-a*10/68.1))*(9.81*68.1)/40;
  int n=0;
  while (n<i)
    {
      if (std::abs(f(x))<eps)
	{
	  break;
	}
      
      x=(1-std::exp(-x*10/68.1))*(9.81*68.1)/40;
      n++;      
    }
  return x;
}
	 
