#include<iostream>
#include<cmath>
double f(double x)
{
  return (exp(-x))-x;
}
int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double xr=0,xu=1.0,xl=0.0;
  int i=0;
  std::cout<<'\t'<<"i"<<'\t'<<'\t'<<"xr"<<std::endl;
  for(i=1;i<=30;i++)
    {
      xr=(xu-((f(xu)*(xl-xu))/(f(xl)-f(xu))));
      if(f(xr)==0)break;
      else
	{ xl=xu;
	  xu=xr;
	}
      std::cout<<'\t'<<i<<'\t'<<xr<<std::endl;
    }
  std::cout<<"Raíz= ";
  std::cout<<xr<<std::endl;
  return 0;
}

	
