#include<iostream>
#include<cmath>
double f(double x)
{
  return ((((9.81)*(68.1))/x)*(1-exp(-(x/68.1)*10)))-40;
}
int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double xu=20.0,xl=10.0,xr=0;
  double eps=1.0e-6;
  int max=30,ii=0;
  std::cout<<"iteración"<<'\t'<<'\t'<<"xl"<<'\t'<<'\t'<<'\t'<<"xr"<<'\t'<<'\t'<<'\t'<<"xu"<<'\t'<<'\t'<<"f(xr)"<<std::endl;
  while(ii<=max)
    {
      xr=0.5*(xu+xl);
      if (std::fabs(f(xr))<=eps) break;
      if(f(xr)*f(xl)<0){xu=xr;}
      else{xl=xr;}
      ii++;
      std::cout<<'\t'<<ii<<'\t'<<xl<<'\t'<<xr<<'\t'<<xu<<'\t'<<f(xr)<<std::endl;
    }
  std::cout<<"Raíz= "<<std::endl;
  std::cout<<xr<<std::endl;
  return 0;
}

   
  
