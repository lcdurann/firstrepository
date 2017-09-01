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
  double xl=2.0,xu=3.0,xr=0.0;
  int n=0;
  std::cout<<"n"<<'\t'<<'\t'<<"xl"<<'\t'<<'\t'<<'\t'<<"xr"<<'\t'<<'\t'<<'\t'<<"xu"<<'\t'<<'\t'<<"f(xr)"<<std::endl;
  for(n=1;n<=30;n++)
  {
    xr=xu-((f(xu)*(xl-xu))/(f(xl)-f(xu)));
    if(f(xr)==0)break;
    if(f(xl)*f(xr)<0){xu=xr;}
    else{xl=xr;}
    std::cout<<n<<'\t'<<xl<<'\t'<<xr<<'\t'<<xu<<'\t'<<f(xr)<<std::endl;
  }
std::cout<<"raíz= ";
std::cout<<xr<<std::endl;
return 0;
}
