#include<iostream>
#include<cmath>
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
  double xi=0;
  int i=0;
  std::cout<<'\t'<<"i"<<'\t'<<'\t'<<"xr"<<std::endl;
  for(i=1;i<=30;i++)
    {
      xi=g(xi);
      if(f(xi)==0)break;
      std::cout<<'\t'<<i<<'\t'<<xi<<std::endl;
    }
  std::cout<<"Raíz= ";
  std::cout<<xi<<std::endl;
  return 0;
}
	
       
      
