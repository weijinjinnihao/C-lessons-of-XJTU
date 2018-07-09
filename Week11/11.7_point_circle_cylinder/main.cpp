#include <iostream>

using namespace std;
//设计点，圆，圆柱体类
class Point
{
      int x,y;
public:
      Point(int a=0,int b=0);
      void Set_Point(int a,int b);
      int GetX(){return x;}
      int GetY(){return y;}
      void Print(){cout<<'['<<x<<','<<y<<']'<<endl;}
};
Point::Point(int a,int b)
{
      Set_Point(a,b);
}
void Point::Set_Point(int a,int b)
{
      x=a;
      y=b;
}
class Circle:public Point
{
      double radius;
public:
      Circle(int a=0,int b=0,double r=0):Point(a,b){SetRadius(r);}
      void SetRadius(double r);
      double GetRadius(){return radius;}
      double Area(){return 3.14*radius*radius;}
      void Print();
};
void Circle::SetRadius(double r)
{
      radius=r;
}
void Circle::Print()
{
      cout<<"Center=";
      Point::Print();
      cout<<endl;
      cout<<"Radius="<<radius<<endl;
}
class Cylinder:public Circle
{
      double height;
public:
      Cylinder(int a=0,int b=0,double r=0,double h=0):Circle(a,b,r){Set_height(h);}
      void Set_height(double h){height=h;}
      //void Set_data(int a,int b,double r,double h);//修改数据
      double Volume(){return Circle::Area()*height;}//计算圆柱体体积
      void Print();
};
/*void Cylinder::Set_data(int a,int b,double r,double h)
{
      SetPoint(a,b);
      SetRadius(r);
      height=h;
}
*/
int main()
{
    Cylinder cy(240,160,10.0,10.0);
    cout<<cy.Volume()<<endl;
    return 0;
}
