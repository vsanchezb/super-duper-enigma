#include <iostream>
#include <cmath>

const int m=5;
const int n=3;

int main()
{
  int A[n*m]={0,0};//llena con 0
  int At[m*n];
  //se llena A
  for (int i=0;i<n;i++)
    {
      for (int j=0;j<m;j++)
	{
	  A[i*m+j]=i*m+j;
	}
    }

  //se llena At
  for (int i=0;i<m;i++)
    {
      for (int j=0;j<n;j++)
	{
	  At[i*n+j]=A[j*m+i];
	}
    }
  //mostrar A
  for (int i=0;i<n;i++)
    {
      for (int j=0;j<m;j++)
	{
	  std::cout<<A[i*m+j]<< " ";
	}
      std::cout<< "\n";
    }
       std::cout<< "\n";
  //mostrar At
  for (int i=0;i<m;i++)
    {
      for (int j=0;j<n;j++)
	{
	  std::cout<<At[i*n+j]<< " ";
	}
      std::cout<< "\n";
    }
       std::cout<< "\n";
    
  return 0;  
}
