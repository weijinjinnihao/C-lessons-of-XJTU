#include <iostream>
#include<cmath>

using namespace std;
//��Ʒ����࣬������Ա���������ݡ����������+��==��������������󸺵�
class Fraction//������
{
      int a;//����
      int b;//��ĸ
public:
      Fraction(int aa=0,int bb=1){a=aa;b=bb;}//���캯��

      int divisior(int p,int q);//�����Լ��
      Fraction operator+(Fraction u);//�����+����
      bool operator==(Fraction u);//�����=����
      Fraction operator-(Fraction u);//��
      void show();
};
int Fraction::divisior(int p,int q)
{
      int r;
      if(p<q)
      {
       int tmp;
       tmp=p;
       p=q;
       q=tmp;
      }
      r=p%q;
      while(r!=0)
      {
            p=q;
            q=r;
            r=p%q;
      }
      return q;
}
Fraction Fraction::operator+(Fraction u)
{
      int tmp;

      u.a=a*u.b+b*u.a;
      u.b=b*u.b;
      tmp=divisior(u.a,u.b);
      u.a=u.a/tmp;
      u.b=u.b/tmp;
      return u;
}
bool Fraction::operator==(Fraction u)
{
      float x,y;
      x=(float)a/b;
      y=(float)u.a/u.b;
      if (x==y)return true;
      else
            return false;
}
Fraction Fraction::operator-(Fraction u)
{
      u.a=(-1)*u.a;

      return u;
}
void Fraction::show()
{
      cout<<a<<'/'<<b<<endl;
}
int main()
{
    Fraction f1(1,3),f2(2,3),f3;
    f3=f1+f2;
    cout<<"f3=";
    f3.show();


    return 0;
}
