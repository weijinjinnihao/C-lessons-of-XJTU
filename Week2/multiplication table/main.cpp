#include <iostream>
#include<cmath>

using namespace std;
//Êä³ö99³Ë·¨±í

int main()
{
    int i,j,res;
    for(i=1;i<=9;i++)
    {
      for(j=1;j<=i;j++)
      {
        res=i*j;
        cout<<i<<'*'<<j<<'='<<res<<' ';
      }
      cout<<endl;
      }
    return 0;
}
