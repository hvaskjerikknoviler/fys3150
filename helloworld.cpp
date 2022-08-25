
#include <iostream>
#include <cmath>

double f(double x){
    return 100*exp(-10*x);
}
int main()
{
  double x = 0;
  double res = f(x);
  std::cout<<res <<"\n";
  return 0;
}

