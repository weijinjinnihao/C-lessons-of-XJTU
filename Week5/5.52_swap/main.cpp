#include <iostream>

using namespace std;

void swap(int &x,int &y)
{
   int tmp;
   tmp=x;
   x=y;
   y=tmp;
   return;
}
int main()
{
    int a=1,b=0;
    swap(a,b);
    cout<<a<<' '<<b<<endl;
    return 0;
}
