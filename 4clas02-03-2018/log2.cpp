#include <iostream>
#include <cmath>

int main()
  
{
  double x=0.1;
  for (x=0.1;x<=1.0e4/*10000*/;x*=2)
    {
      std::cout<< x << "\t" << std::log2(x)<< std::endl;
    }
  
  return 0;
}
