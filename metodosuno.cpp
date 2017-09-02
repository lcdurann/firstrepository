#include<iostream>
#include<cmath>
const double xe=0.5671432904097838729999;
const double xe2=2;
double f(double x)
{
  return exp(-x)-x;
}

double g(double x) //g es la función utilizada para iteración de punto fijo
{
  return exp(-x);
}

double h(double x)//h es la derivada de f
{
  return -exp(-x)-x;
}

int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double xl=-1.0,xu=1.0,xr=0.0,xi=0.0,E=0.0;      //metodo de bisección
  double xl2=-1.0,xu2=1.0,xr2=0.0,xi2=0.0,E2=0.0; //metodo de regula falsi
  double xl3=0.0,xu3=3.0,xr3=0.0,xi3=0.0,E3=0.0;//metodo de iteración
  double xl4=0.0,xu4=3.0,xr4=0.0,xi4=0.0,E4=0.0;//metodo de newton
  double xl5=-1.0,xu5=1.0,xr5=0.0,xi5=0.0,E5=0.0;//metodo de secante
  double eps=1.0e-6;
  int n=0,m=0,a=0,b=0,c=0;
 std::cout<<"Biseccion"<<std::endl;
  for(n=1;n<=30;n++)
  {
    xi=xr;
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
    
    E=100*fabs((xi-xr)/(xr));
    
    std::cout<<n<<'\t'<<xr<<'\t'<<E<<std::endl;

  }

  std::cout<<'\v'<<std::endl;
  std::cout<<"Regula falsi"<<std::endl;
  for(m=1;m<=30;m++)
  {
    xi2=xr2; 
    xr2=xu2-((f(xu2)*(xl2-xu2))/(f(xl2)-f(xu2)));
    if (std::fabs(f(xr2))<=eps) break;
    if(f(xl2)*f(xr2)<0)
      {
	xu2=xr2;
	
      }
    else
      {
	xl2=xr2;
      }
    
    E2=100*fabs((xi2-xr2)/(xr2));
    
    std::cout<<m<<'\t'<<xr2<<'\t'<<E2<<std::endl;
    
  }

  std::cout<<'\v'<<std::endl;
  std::cout<<"Iteracion"<<std::endl;
  for(a=0;a<=30;a++)
  {
    xi3=xr3; 
    xr3=g(xr3);
      if (std::fabs(f(xr3))<=eps) break;
     E3=100*fabs((xi3-xr3)/(xr3));
    std::cout<<a<<'\t'<<xr3<<'\t'<<E3<<std::endl;
    
  }



  std::cout<<'\v'<<std::endl;
  std::cout<<"Newton"<<std::endl;
  for(b=1;b<=30;b++)
  {
    xi4=xr4; 
    xr4=xr4-(f(xr4)/h(xr4));
    if (std::fabs(f(xr4))<=eps) break;
    E4=100*fabs((xi4-xr4)/(xr4));
    std::cout<<b<<'\t'<<xr4<<'\t'<<E4<<std::endl;
    
  }


  std::cout<<'\v'<<std::endl;
  std::cout<<"Secante"<<std::endl;
  for(c=1;c<=30;c++)
  {
    xi5=xr5; 
    xr5=(xu5-((f(xu5)*(xl5-xu5))/(f(xl5)-f(xu5))));
    if (std::fabs(f(xr5))<=eps) break;
    else
      {
	xl5=xu5;
	xu5=xr5;
      }
    E5=100*fabs((xi5-xr5)/(xr5));
    std::cout<<c<<'\t'<<xr5<<'\t'<<E5<<std::endl;
    
  }

  return 0;
}
