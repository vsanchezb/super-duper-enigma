#include <iostream>
#include <random>

int main ()
{
  int seed=0;
  std::mt19937 gen (seed);
  std::uniform_real_distribution<> dis(1,2);
  for (int n=0; n<1000;n++)
    {
      std::cout<<dis(gen)<<" ";
    }
  std::cout<< "\n";
}
