#include<iostream>
#include<cmath>
const double x=0.5671432904097838729999;
double f(double x)
{
  return (exp(-x))-x;
}
double g(double x)
{
  return (exp(-x));
}

int main(void)
{
   std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double xi=0.0,E=0.0;
  double eps=1.0e-6;
  int i=0;
  std::cout<<'\t'<<"i"<<'\t'<<'\t'<<"xr"<<std::endl;
  for(i=0;i<=30;i++)
    {
      xi=g(xi);
      if (std::fabs(f(xi))<=eps) break;
      E=100*fabs((xi-x)/(x));
      std::cout<<'\t'<<i<<'\t'<<xi<<'\t'<<E<<std::endl;
      
    }
  std::cout<<"Raiz= ";
  std::cout<<xi<<std::endl;
  return 0;
}
	
       
      
