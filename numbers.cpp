#include<iostream>
#include<string>
int main(void)
{
  int a=0,b=1,c=2,d=3,e=4;
  std:: string number, v= "cero",w="uno",x="dos",y="tres",z="cuatro";
  std::cout<<"Escriba el numero alfabéticamente: ";
  std::cin>>number;
  if(v==number)
    {
      std::cout<<a<<std::endl;
    }
  if(w==number)
    {
      std::cout<<b<<std::endl;
    }
  if(x==number)
    {
      std::cout<<c<<std::endl;
    }
  if(y==number)
    {
      std::cout<<d<<std::endl;
    }
  if(z==number)
    {
      std::cout<<e<<std::endl;
    }
  else
    {
      std::cout<<" No conozco ese número"<<std::endl;
    }
  
  return 0;
}
