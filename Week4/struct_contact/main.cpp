#include <iostream>

using namespace std;

int main()
{
    int i;
    struct contact
    {
          char name[10];
          char sex[10];
          char num1[10];
          char num2[10];

    };
    contact listcon[3];
    for (i=0;i<=2;i++)
    {
         cin>>listcon[i].name>>listcon[i].sex>>listcon[i].num1>>listcon[i].num2;
    }
    for (i=2;i>=0;i--)
    {
          cout<<listcon[i].name<<' '<<listcon[i].sex<<' '<<listcon[i].num1<<' '<<listcon[i].num2<<endl;
    }
    return 0;
}
