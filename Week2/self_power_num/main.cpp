#include <iostream>
#include<cmath>
using namespace std;
//寻找n位自幂数，自幂数：n位数的每位数的n次方加起来等于这个n位数

int main()
{

    float i,start,termi,a,n,m,sum;//在使用pow函数时，变量应设置为浮点型，否则会出错。
    cout<<"Enter n"<<endl;
    cin>>n;
    start=pow(10,(n-1));
    termi=pow(10,n)-1;
    cout<<start<<endl<<termi<<endl;

    if(n>0)
    {
      for(i=start;i<=termi;i++)
      {
          m=i;
          sum=0;

          while(m!=0)
          {
                a=(int)m%10;
                m=(m-a)/10;
                sum=sum+pow(a,n);
          }
          if (sum==i)
          {

                cout<<i<<endl;
          }
      }
    }
    else
      cout<<"error!"<<endl;
    return 0;
}
