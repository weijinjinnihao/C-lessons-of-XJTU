#include <iostream>

using namespace std;
//实现将一个5*5的矩阵的前n行n列的形成的矩阵进行转置

void trans(int a[][5],int n)
{
      int tmp,i, j;
      for (i=0;i<n;i++)
      {
            for (j=i;j<n;j++)
            {
                  tmp=a[i][j];
                  a[i][j]=a[j][i];
                  a[j][i]=tmp;

            }
      }
      return;
}
int main()
{
    int a[5][5],n,i,j;
    cout<<"Enter a[][]\n";
    for (i=0;i<5;i++)
    {
          for(j=0;j<5;j++)
          {
                cin>>a[i][j];
          }

    }
    cout<<"Enter n\n";
    cin>>n;
    trans(a,n);
    for (i=0;i<5;i++)
    {
          for(j=0;j<5;j++)
          {
                cout<<a[i][j]<<' ';
          }
            cout<<endl;
    }
    return 0;
}
