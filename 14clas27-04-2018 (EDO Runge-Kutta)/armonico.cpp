#include <iostream>
#include <cstdlib>//para el error
#include <vector>
#include <algorithm>

//double d(double t, std::vector<double> y, int n);
void euler(double a, double b, double h,std::vector<double> & y);
double f(double t,const std::vector<double> & yaux, int id);
const double w=2.35;// omega

int main()
{
  const double N=2;
  const double a=0;
  const double b=3.4;
  const double h=0.01;
  std::vector<double> y={0.13,0};// {x0,v0}
  
  euler(a,b,h,y);
  
}

void euler(double a, double b, double h,std::vector<double> & y)
{
  const int N = std::lrint((b-a)/h);
  std::vector<double> yaux(y.size());
  for (int nt=0;nt<N;nt++) {
    double t=a +h*nt;
    std::copy(y.begin(),y.end(), yaux.begin());
    for(int id=0; id<y.size();id++)
      {
	y[id]=y[id]+h*f(t,yaux,id);//euler
	  }
    std::cout<<t<<"\t"<<y[0]<<"\t"<< y[1]<<"\n";
  }
}

double f(double t,const std::vector<double> & yaux, int id)
{
  if (id==0)
    {
      return yaux[1];
    }
  else if(id==1)
    {
      return -w*w*yaux[0];
    }
  else
    {
      std::cerr<<"ERROR!!!! Id no existe"<<std::endl;
      exit(1);
    }
}
