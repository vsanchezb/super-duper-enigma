#include <iostream>
#include <cmath>

using fncptr= double(double);

double trapecio(fncptr fun, double a,double b, int n);
double trapeciorichardson(fncptr fun, double a,double b, int n);

int main()
{
  std::cout<<"integral por trapecios (n=20)\n"<<trapecio(sin ,0 ,M_PI ,20)<<std::endl;

  std::cout<<"integral por trapecios (n=40)\n"<<trapecio(sin ,0 ,M_PI ,40)<<std::endl;

  std::cout<<"integral por trapecios con richardson (n=20)\n"<<trapeciorichardson(sin ,0 ,M_PI ,20)<<std::endl;
}

double trapecio(fncptr fun, double a,double b, int n)
{
  double h=(b-a)/n;
  double sum=0.5*(fun(a)+fun(b));
  double result;

  for (int i=1;i<n-1;i++)
    {
      sum+=fun(a+i*h);   
    }

  result=h*sum;

  return result;
}

double trapeciorichardson(fncptr fun, double a,double b, int n)
{
  double h=(b-a)/n;
  double result;
  result=(4*trapecio(fun ,a ,b ,2*n)-trapecio(fun ,a ,b ,n))/3;
  return result;
}
