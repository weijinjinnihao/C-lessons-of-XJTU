#include <iostream>
//���һ�������Բ��
using namespace std;
class point//����һ������
{
      int x,y;//Ĭ�ϳ�ԱΪ˽��
public:
      void InitPoint(int a,int b);//��������
      int GetX(){return x;}//ȡX���ꣻ
      int GetY(){return y;}//ȡY����
      void Print();//����������

};
void point::InitPoint(int a,int b)
{
   cout<<"������Բ������\n";
   cin>>a>>b;
   x=a;
   y=b;
}
void point::Print()
{
      cout<<'['<<x<<','<<y<<']'<<endl;
}
class circle//����һ��Բ��
{
private:
      float radius;//�뾶
      point center;//Բ�Ķ���
public:
      void InitCircle(float r, point p);
      float Getradius(){return radius;}
      point Getcenter(){return center;}
      double area(){return 3.14*radius*radius;}//����Բ�����
      void Print();//ȡ��Բ������Ͱ뾶
};
void circle::InitCircle(float r, point p)
{
      cout<<"������Բ�İ뾶\n";
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
