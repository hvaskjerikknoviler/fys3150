
#include <iostream>
#include <cmath>

double f(double x){
  return 100*exp(-10*x);
}
double g(double x){
  return exp(x);
}

int main()
{
  double x = 0;
  double res = f(x);
  double res2 = g(x);
  std::cout<<res2 <<"\n";
  std::cout<<res <<"\n";
  return 0;
}

