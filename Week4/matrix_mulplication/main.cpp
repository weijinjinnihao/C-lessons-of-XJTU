#include <iostream>

using namespace std;

int main()
{
    //�������˻�
    int a1,a2,b1,b2,i,j,m;
    cout<<"�������һ�������ά��\n";
    cin>>a1>>a2;
    cout<<"������ڶ��������ά��\n";
    cin>>b1>>b2;
    if (a2!=b1)
    {
          cout<<"�������������ά��\n";
          cout<<"�����������һ�������ά��\n";
          cin>>a1>>a2;
          cout<<"����������ڶ��������ά��\n";
          cin>>b1>>b2;

    }
    int a[a1][a2],b[b1][b2],c[a1][b2];
    cout<<"�밴������a����\n";
    for (i=0;i<a1;i++)
    {
        for (j=0;j<a2;j++)
            cin>>a[i][j];
    }
    cout<<"�밴������b����\n";
     for (i=0;i<b1;i++)
    {
        for (j=0;j<b2;j++)
            cin>>b[i][j];
    }
    for (i=0;i<a1;i++)
    {

          for(j=0;j<b2;j++)
          {
                c[i][j]=0;
                for (m=0;m<a2;m++)//a2=b1=m
                {
                     c[i][j]=c[i][j]+a[i][m]*b[m][j];
                }
          }

    }
    for (i=0;i<a1;i++)
    {
          for(j=0;j<b2;j++)
          {
                cout<<c[i][j]<<' ';
          }
          cout<<endl;
    }
    return 0;
}
