#include<iostream>
#include<cmath>
const double xe=0.5671432904097838729999;
double f(double x)
{
  return (exp(-x))-x;
}
int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double xr=0,xu=1.0,xl=0.0,E=0.0;
  double eps=1.0e-6;
  int i=0;
  std::cout<<'\t'<<"i"<<'\t'<<'\t'<<"xr"<<std::endl;
  for(i=1;i<=30;i++)
    {
      xr=(xu-((f(xu)*(xl-xu))/(f(xl)-f(xu))));
     if (std::fabs(f(xr))<=eps) break;
      else
	{ xl=xu;
	  xu=xr;
	}
     std::cout<<'\t'<<i<<'\t'<<xr<<'\t'<<E<<std::endl;
      E=100*fabs((xe-xr)/(xe));
    }
  std::cout<<"Raiz= ";
  std::cout<<xr<<std::endl;
  return 0;
}

	
