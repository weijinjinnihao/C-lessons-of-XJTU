#include <iostream>

using namespace std;

int add(int b[],int m, int n)
{
      int i,sum=0;
      for (i=m;i<n;i++)
      {
            sum=sum+b[i];
      }
      return sum;
}
int main()
{
    int a[5]={1,2,3,4,5},m=1,n=4,sum;

    sum=add(a,m,n);
    cout<<sum<<endl;


    return 0;
}
