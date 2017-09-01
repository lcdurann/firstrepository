#include<iostream>
#include<cmath>
const double xi=0.5671432904097838729999;
double f(double x)
{
  return exp(-x)-x;
}
int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double xl=-1.0,xu=1.0,xr=0.0,E_a=0.0;
  double eps=1.0e-6;
  int n=0;
  for(n=1;n<=30;n++)
  {
      xr=0.5*(xu+xl);
     if (std::fabs(f(xr))<=eps) break;
     if(f(xl)*f(xr)<0)
       {
	 xu=xr;
	
       }
     else
       {
	 xl=xr;
       }
    
     E_a=100*fabs((xi-xr)/(xi));
     
     std::cout<<n<<'\t'<<xr<<'\t'<<E_a<<std::endl;
  }
  std::cout<<"raíz= ";
  std::cout<<xr<<std::endl;
  return 0;
}
