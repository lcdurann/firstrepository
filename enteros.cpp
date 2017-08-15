#include<iostream>
int main(void)
{
  int x=0;
  std::cout<<"Escriba el número: ";
  std::cin>>x;
  if(x%2==0)
    {
      std::cout<<x;
      std::cout<<" es par"<<std::endl;
    }
  else
    {
      std::cout<<x;
      std::cout<<" es impar"<<std::endl;
    }
  return 0;
}
