#include <iostream>
int sum(int n,int m);
int main()
{
  int n;
  int m;
  std::cout<<"suma desde \n";
  std::cin>>n;
  std::cout<<"hasta\n";
  std::cin>>m;
  std::cout<<sum(n,m)<<"\n";
  return 0;
}

int sum(int n,int m)
{
  int a=n;
  int b=0;
  if (n<m)
    {
      while (a<=m)
	{
	  b+=a;
	  a++;
	}
    }
  
  /*else
    {
    
    while (a>=m)
    {
    b+=a;
    a--;
    }
    }*/
  return b;
}
