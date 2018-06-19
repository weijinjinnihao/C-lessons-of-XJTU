#include <iostream>

using namespace std;

//将月份值（1-12）转换为相应的月份
char*convert_mon(int n)
{
      char *mon[]=//定义一个指针数组
      {
          "illage month",
          "JAN",
          "FEB",
          "MAR",
          "APR",
          "MAY",
          "JUN",
          "JUL",
          "AUG",
          "SEP",
          "OCT",
          "NOV",
          "DEC"
      };

      if ((n<=12)&&(n>=1))
            return mon[n];
      else return mon[0];
}
int main()
{
    int n;
    char *mon;
    cout<<"Enter n:";
    cin>>n;
    mon=convert_mon(n);
    cout<<mon<<endl;
    return 0;
}
