#include <iostream>

using namespace std;

//��str�ĵ�һ���ַ����𣬲鵽�ַ���ͷ��ظ��ַ��ĵ� ַ���鲻���򷵻ؿ�ֵNULL
char *char_find(char *str,char c)
{
      while(*str!='\0')
      {
            if (*str==c)return str;
            str++;
      }
      return NULL;
}
int main()
{
    char *str="abcdef";
    char *str_loca;
    str_loca=char_find(str,'c');
    cout<<"���ַ����ַ����е�λ����:"<<str_loca-str<<endl;


    return 0;
}
