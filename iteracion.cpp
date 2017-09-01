#include<iostream>
#include<cmath>
const double xe=0.5671432904097838729999;
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
  double xr=0.0,E=0.0;
  double eps=1.0e-6;
  int i=0;
  std::cout<<'\t'<<"i"<<'\t'<<'\t'<<"xr"<<std::endl;
  for(i=0;i<=30;i++)
    {
      xr=g(xr);
      if (std::fabs(f(xr))<=eps) break;
      E=100*fabs((xr-xe)/(xe));
      std::cout<<'\t'<<i<<'\t'<<xr<<'\t'<<E<<std::endl;
      
    }
  std::cout<<"Raiz= ";
  std::cout<<xr<<std::endl;
  return 0;
}
	
       
      
