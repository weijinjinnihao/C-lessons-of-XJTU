#include <iostream>
#include<cmath>

using namespace std;
//将平面上的集合图形抽象为类，如矩形类，圆类，三角形类等等
#define pi 3.1415
class Shape
{
      int x,y;//Shape类中的中心点坐标
public:
      Shape(int xx,int yy){x=xx,y=xx;}//中心点的构造函数
      int Getx(){return x;}
      int Gety(){return y;}
      void print(){cout<<'['<<x<<','<<y<<']'<<endl;}
      virtual double area()=0;
      virtual double circumference()=0;//定义面积和周长函数，是两个虚函数
};
class Rectangle:public Shape
{
      int width,height;
public:
      Rectangle(int xx,int yy,int w,int h):Shape(xx,yy){ width=w; height=h;}
      double area(){return width*height;}
      double circumference(){return 2.0*(width*height);}
};
class Circle:public Shape
{
      int xx,yy,r;
public:
      Circle(int xx,int yy,int r):Shape(xx,yy){this->r=r;}
      double area(){return pi*r*r;}
      double circumference(){return 2.0*pi*r;}
};
int main()
{

    Rectangle rectangle1(10,10,10,5);
    Circle circle1(1,2,1);
    Shape *p1=&rectangle1;
    Shape *p2=&circle1;
    double area1,area2,cir1,cir2;

    area1=p1->area();
    area2=p2->area();
    cir1=p1->circumference();
    cir2=p2->circumference();
    cout<<area1<<endl<<area2<<endl<<cir1<<endl<<cir2<<endl;


    return 0;
}
