#include <iostream>
#include<cmath>

using namespace std;
//设计分数类，函数成员：设置数据、输出分数、+、==、求最大公因数、求负等
class Fraction//分数类
{
      int a;//分子
      int b;//分母
public:
      Fraction(int aa=0,int bb=1){a=aa;b=bb;}//构造函数

      int divisior(int p,int q);//求最大公约数
      Fraction operator+(Fraction u);//运算符+重载
      bool operator==(Fraction u);//运算符=重载
      Fraction operator-(Fraction u);//求负
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
