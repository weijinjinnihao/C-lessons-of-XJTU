#include <iostream>

using namespace std;
//��д�����������ַ������״γ��ֵķǿո��ַ���ʼ���ַ���

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
