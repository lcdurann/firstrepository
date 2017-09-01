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
  double xl=10.0,xu=20.0,xr=1.5,E_a=0.0,dxr=0.0,xi=0.0;
  int n=0;
  std::cout<<"n"<<'\t'<<'\t'<<"xl"<<'\t'<<'\t'<<'\t'<<"xr"<<'\t'<<'\t'<<'\t'<<"xu"<<'\t'<<'\t'<<"f(xr)"<<'\t'<<'\t'<<'\t'<<"E_a"<<std::endl;
  for(n=1;n<=30;n++)
  {
      xr=0.5*(xu+xl);
     if(f(xr)==0)break;
     if(f(xl)*f(xr)<0)
       {
	 xu=xr;
	
       }
     else
       {
	 xl=xr;
       }
    
     dxr=fabs(xu-xl);
     E_a=100*fabs((dxr)/(xr));
     
     std::cout<<n<<'\t'<<xl<<'\t'<<xr<<'\t'<<xu<<'\t'<<f(xr)<<'\t'<<E_a<<std::endl;
  }
  std::cout<<"raíz= ";
  std::cout<<xr<<std::endl;
  return 0;
}
