#include <iostream>

using namespace std;
//将输入的小写单词转换为大写
int main()
{
    char a[10];
    int i=0;
    cin>>a;
    while(a[i]!='\0')//'\0‘表示空字符
    {
       a[i]=a[i]-32;
       i++;
    }
    cout<<a<<endl;
    return 0;
}
