#include <iostream>

using namespace std;
//���㺯��f=n��

int fun(int n)
{
      if (n==0)
            return 1;
      else
            return n*fun(n-1);
}
int main()
{
    int m,n;
    cin>>n;
    m=fun(n);
    cout<<m<<endl;

    return 0;
}
