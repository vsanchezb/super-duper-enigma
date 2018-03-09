#include <iostream>
using namespace std;
int isprime(int e)
{
  int n=2;
  int r;
  int p=1;
  if(e>0)
    {
    while (n<e)
      {
	r=e%n;
	if (r==0)
	  {
	    p=0;
	  }
	
	n=n+1;
      }
    }
  else p=0;
  return p;
}

int main()
{
  int e;
  cout << "numero\n";
  cin >> e;
  e=isprime(e);
  if (e==1) cout << "primo\n";
  else cout << "no primo\n";
  return 0;
}
