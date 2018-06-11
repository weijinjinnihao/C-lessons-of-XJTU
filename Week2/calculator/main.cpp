#include <iostream>
#include<cmath>

using namespace std;
//设计一个简单计算器

int main()
{
    float num1,num2,result;
    char op;
    cout<<"Please enter number and op"<<endl;
    cin>>num1>>op>>num2;
    switch(op)
    {
      case('+'):{result=num1+num2;cout<<result<<endl;break;}
      case('-'):{result=num1-num2;cout<<result<<endl;break;}
      case('*'):{result=num1*num2;cout<<result<<endl;break;}
      case('/'):
            {
              if(num2==0)
              cout<<"error!"<<endl;

              else
              {
               result=num1/num2;
               cout<<result<<endl;
              }
              break;
            }
      default:
            cout<<"Invalid op!"<<endl;
    }
    return 0;
}
