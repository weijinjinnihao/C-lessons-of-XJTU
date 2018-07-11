#include <iostream>

using namespace std;

class Fruit
{
public:
      virtual void print(){cout<<"水果"<<endl;}
};
class Banana:public Fruit
{
public:
      void print(){cout<<"香蕉"<<endl;}
};
class Apple:public Fruit
{
public:
      void print(){cout<<"苹果"<<endl;}
};
int main()
{
    Banana banana;
    Apple apple;
    Fruit *p[]=//创建一个指针数组。分别指向基类和子类
    {
          new Fruit(),new Banana(),new Apple()
    };
    for (int i=0;i<5;i++)
    {
      (*p[i]).print();
    }


    return 0;
}
