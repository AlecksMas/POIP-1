#include <iostream> //for std: cout

int main()
{
  float a,b,c,p,s, l, m, k, q, v, r, o,pi=3.1415  ;
  {
  std::cout<<"������� ����� ������ ������������:";
    std::cin>>a>>b>>c;
  if ((a+b)<c or (a+c)<b or (b+c)<a)
    {
    std::cout<<"\n������������ �����������";
    goto sq;
    }
  p=(a+b+c)/2;
  s= sqrt(p*(p-a)*(p-b)*(p-c));
  v=a+b+c;
  std::cout <<"\n������� ������������:" << s <<"\n�������� ������������:" << v;
  
  sq:
  std::cout<<"\n������� ����� ������ ��������������:";
  std::cin>>l>>m;
  k=l*m;
  q=(l+m)*2;
  std::cout <<"\n������� ��������������:" << k <<"\n�������� ��������������:" << q ;
  
  std::cout<<"\n������� ������ �����:";
  std::cin>>r;
  o=pi*r*r;
  std::cout <<"\n������� �����:" << o;
  return 0;
}
}