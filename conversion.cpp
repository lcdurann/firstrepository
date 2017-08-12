#include<iostream>
const double K= 1.609;
int main(void)
{ double x=0;
  std::cout<<"valor a convertir:  ";
  std::cin>>x;
 std::cout<<"Millas"<<std::endl;
  std::cout<<"resultado: ";
  std::cout<< x*K;
  std::cout<<"  Kilómetros"<<std::endl;
  return 0;
}
