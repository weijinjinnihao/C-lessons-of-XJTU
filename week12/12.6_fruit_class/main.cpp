#include <iostream>

using namespace std;

class Fruit
{
public:
      virtual void print(){cout<<"ˮ��"<<endl;}
};
class Banana:public Fruit
{
public:
      void print(){cout<<"�㽶"<<endl;}
};
class Apple:public Fruit
{
public:
      void print(){cout<<"ƻ��"<<endl;}
};
int main()
{
    Banana banana;
    Apple apple;
    Fruit *p[]=//����һ��ָ�����顣�ֱ�ָ����������
    {
          new Fruit(),new Banana(),new Apple()
    };
    for (int i=0;i<5;i++)
    {
      (*p[i]).print();
    }


    return 0;
}
