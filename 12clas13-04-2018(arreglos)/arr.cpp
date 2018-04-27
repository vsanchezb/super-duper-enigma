#include <iostream>
#include <cmath>

//using f=double(double);
//double mkmatriz(int);
//double matent(int n,int m);

const int m=5;
const int n=3;

int main()
{
  int A[n][m];
  int At[m][n];
  //se llena A
  for (int i=0;i<n;i++)
    {
      for (int j=0;j<m;j++)
	{
	  A[i][j]=i*m+j;
	}
    }

  //se llena At
  for (int i=0;i<m;i++)
    {
      for (int j=0;j<n;j++)
	{
	  At[i][j]=A[j][i];
	}
    }
  //mostrar A
  for (int i=0;i<n;i++)
    {
      for (int j=0;j<m;j++)
	{
	  std::cout<<A[i][j]<< " ";
	}
      std::cout<< "\n";
    }
       std::cout<< "\n";
  //mostrar At
  for (int i=0;i<m;i++)
    {
      for (int j=0;j<n;j++)
	{
	  std::cout<<At[i][j]<< " ";
	}
      std::cout<< "\n";
    }
       std::cout<< "\n";
    
  return 0;  
}


