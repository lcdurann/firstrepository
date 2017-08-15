#include<iostream>
int main(void)
{
  int x=0,y=0,z=0,a=0,b=0,c=0;
  std::cout<<"escribe los valores: "<<std::endl;
  std::cin>> x;
  std::cin>> y;
  std::cin>> z;
  if((x>=y)and(y>=z))
    {
      (a=x);
      (b=y);
      (c=z);
      
    }
   if((x>=z)and(z>=y))
    {
      (a=x);
      (b=z);
      (c=y);
      
    }
   if((y>=x)and(x>=z))
    {
      (a=y);
      (b=x);
      (c=z);
      
    }
    if((y>=z)and(z>=x))
    {
      (a=y);
      (b=z);
      (c=x);
      
    }
     if((z>=x)and(x>=y))
    {
      (a=z);
      (b=x);
      (c=y);
      
    }
      if((z>=y)and(y>=x))
    {
      (a=z);
      (b=y);
      (c=x);
      
    }
  
  std::cout<<a;
  std::cout<<",";
  std::cout<<b;
  std::cout<<",";
  std::cout<<c<<std::endl;
  
  return 0;
}
