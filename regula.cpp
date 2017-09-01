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
  double xl=-1.0,xu=2.0,xr=0.0,E=0.0;
   double eps=1.0e-6;
  int n=0;
  std::cout<<"n"<<'\t'<<'\t'<<"xl"<<'\t'<<'\t'<<'\t'<<"xr"<<'\t'<<'\t'<<'\t'<<"xu"<<'\t'<<'\t'<<"f(xr)"<<std::endl;
  for(n=1;n<=30;n++)
  {
    xr=xu-((f(xu)*(xl-xu))/(f(xl)-f(xu)));
    if (std::fabs(f(xr))<=eps) break;
    if(f(xr)*f(xl)<0){xu=xr;}
    else{xl=xr;}
    E=100*fabs((xe-xr)/(xe));
    std::cout<<n<<'\t'<<xl<<'\t'<<xr<<'\t'<<xu<<'\t'<<f(xr)<<'\t'<<E<<std::endl;
  }
  
std::cout<<"raiz= ";
std::cout<<xr<<std::endl;
return 0;
}
