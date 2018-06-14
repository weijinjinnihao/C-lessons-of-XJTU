#include <iostream>

using namespace std;

void fun(char c,int n)
{
      int i;
      for (i=0;i<n;i++)
      {
            cout<<c;
      }
      return;
}
int main()
{
    fun('a',3);
    return 0;
}
