#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
    enum ball
    {
       red,yellow,blue
    };
    for (i=red;i<=blue;i++)
    {
          for (j=i;j<=blue;j++)
          {
                for (k=j;k<=blue;k++)
                {
                      if((i!=j) && (j!=k) && (i!=k))
                      {
                            cout<<i<<' '<<j<<' '<<k<<endl;
                      }
                }
          }
    }
    return 0;
}
