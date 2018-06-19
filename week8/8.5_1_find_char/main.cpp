#include <iostream>

using namespace std;

//从str的第一个字符查起，查到字符后就返回该字符的地 址；查不到则返回空值NULL
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
    cout<<"该字符在字符串中的位置是:"<<str_loca-str<<endl;


    return 0;
}
