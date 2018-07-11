#include <iostream>

using namespace std;

class Pet
{
public:
      virtual void speak()
      {
            cout<<"zzz"<<endl;
      }
};
class Cat:public Pet
{
public:
      void speak()
      {
            cout<<"miao!miao!"<<endl;
      }
};
class Dog:public Pet
{
public:
      void speak(){cout<<"wang!wang!"<<endl;}
};
int main()
{
    Pet pet;
    //Pet *p=&pet;
    Cat cat;
    Dog dog;
    /*int x;
    cin>>x;

    if (x==1)
      p=&cat;
    if (x==2)
      p=&dog;*/
      pet=cat;

    pet.speak();
    return 0;
}
