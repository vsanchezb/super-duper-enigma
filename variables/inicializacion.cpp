/**/
#include <iostream>
using namespace std;
int main()
{
  int a=5;
  int b(3);
  int c(2); //por que no dejausar corchetes???
  int result;

  a=a+b; // el = no es igual matematico, significa asignacion de un valor
  result=a-c;
  cout<< result << endl;
  return 0;
}
