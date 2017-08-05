#include<iostream>
using namespace std;
int main(void)
{cout<<"Volumen de un cilindro"<<endl;
  int r,h,v;   
  cout<<"radio=";
  cin>>r;
  cout<<"altura=";
  cin>>h;
  v=h*r*r*(3.14);
  cout<<"volumen=";
  cout<<v<<endl;
  return 0;
}
