#include<iostream>
int main(void)
{
  int c,p,n,d,q,h,D;
  std::cout<< "cuantos pennies tienes"<<'\?';
  std::cin>> p;
  std::cout<< "cuantos nickels tienes"<<'\?';
  std::cin>> n;
  std::cout<<"cuantos dimes tienes"<<'\?';
  std::cin>> d;
  std::cout<<"cuantos quarters tienes"<<'\?';
  std::cin>> q;
  std::cout<<"cuantos half dollars tienes"<<'\?';
  std::cin>> h;
  std::cout<<"cuantos dollars tienes"<<'\?';
  std::cin>> D;
  c= p+n*5+d*10+q*25+h*50+D*100;
  (p==1)?std::cout<<" Tienes "<<p<<" penny"<<std::endl : std::cout<<" Tienes "<<p<<" pennies"<<std::endl;
  (n==1)? std::cout<<" Tienes "<<n<<" nickel"<<std::endl : std::cout<<" Tienes "<<n<<" nickels"<<std::endl;
  (d==1)? std::cout<<" Tienes "<<d<<" dime"<<std::endl : std::cout<<" Tienes "<<d<<" dimes"<<std::endl;
  (q==1)? std::cout<<" Tienes "<<q<<" quarter"<<std::endl : std::cout<<" Tienes "<<q<<" quarters"<<std::endl;
  (h==1)?std::cout<<" Tienes "<<h<<" half dollar"<<std::endl : std::cout<<" Tienes "<<h<<" half dollars"<<std::endl;
  (D==1)?std::cout<<" Tienes "<<D<<" dollar"<<std::endl : std::cout<<" Tienes "<<D<<" dollars"<<std::endl;
  (c==1)? std::cout<<" Tienes "<<c<<" centavo"<<std::endl :  std::cout<<" Tienes "<<c<<" centavos"<<std::endl;
  ((double)c/100==1)? std::cout<<" Tienes en total "<<(double)c/100<<"Dollar"<<std::endl :  std::cout<<" Tienes en total "<<(double)c/100<<" Dollars"<<std::endl;
  return 0;
}
