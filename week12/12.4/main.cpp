#include <iostream>
#include<cmath>

using namespace std;
//��ƽ���ϵļ���ͼ�γ���Ϊ�࣬������࣬Բ�࣬��������ȵ�
#define pi 3.1415
class Shape
{
      int x,y;//Shape���е����ĵ�����
public:
      Shape(int xx,int yy){x=xx,y=xx;}//���ĵ�Ĺ��캯��
      int Getx(){return x;}
      int Gety(){return y;}
      void print(){cout<<'['<<x<<','<<y<<']'<<endl;}
      virtual double area()=0;
      virtual double circumference()=0;//����������ܳ��������������麯��
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
