#include <iostream>
#include<cmath>
using namespace std;
//Ѱ��nλ����������������nλ����ÿλ����n�η��������������nλ��

int main()
{

    float i,start,termi,a,n,m,sum;//��ʹ��pow����ʱ������Ӧ����Ϊ�����ͣ���������
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
