#include <iostream>
//设计一个点类和圆类
using namespace std;
class point//定义一个点类
{
      int x,y;//默认成员为私有
public:
      void InitPoint(int a,int b);//设置坐标
      int GetX(){return x;}//取X坐标；
      int GetY(){return y;}//取Y坐标
      void Print();//输出点的坐标

};
void point::InitPoint(int a,int b)
{
   cout<<"请输入圆心坐标\n";
   cin>>a>>b;
   x=a;
   y=b;
}
void point::Print()
{
      cout<<'['<<x<<','<<y<<']'<<endl;
}
class circle//定义一个圆类
{
private:
      float radius;//半径
      point center;//圆心对象
public:
      void InitCircle(float r, point p);
      float Getradius(){return radius;}
      point Getcenter(){return center;}
      double area(){return 3.14*radius*radius;}//计算圆的面积
      void Print();//取出圆心坐标和半径
};
void circle::InitCircle(float r, point p)
{
      cout<<"请输入圆的半径\n";
      cin>>r;
      radius=r;
      center=p;
}
void circle::Print()
{
      cout<<"center=";
      center.Print();
      cout<<"radius="<<radius<<endl;
}
int main()
{
    int a;
    int b;
    float r;
    point p;
    circle c;

    p.InitPoint(a,b);
    p.Print();

    c.InitCircle(r,p);
    c.Print();
    return 0;
}
