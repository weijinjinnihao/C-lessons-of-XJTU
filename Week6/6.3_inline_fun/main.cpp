#include <iostream>

using namespace std;

inline int square(int n)
{
      return n*n;
}
int main()
{
    int n,i,sum;
    cin>>n;
    for (i=0;i<n;i++)
    {
          sum=sum+square(i);
    }
    cout<<sum<<endl;
    return 0;
}
