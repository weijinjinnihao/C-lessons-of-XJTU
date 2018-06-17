#include <iostream>

using namespace std;
//编写函数，返回字符串中首次出现的非空格字符开始的字符串

char *noblank_array(char a[])
{
      while(*a==' ')a=a+1;
      return a;
}
int main()
{
    char *b="  using name space";
    int i=0;

    b=noblank_array(b);
    while(b[i]!='\n')
    {
          cout<<b[i];
          i++;
    }
    return 0;
}
