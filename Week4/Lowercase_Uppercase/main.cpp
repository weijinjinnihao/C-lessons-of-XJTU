#include <iostream>

using namespace std;
//�������Сд����ת��Ϊ��д
int main()
{
    char a[10];
    int i=0;
    cin>>a;
    while(a[i]!='\0')//'\0����ʾ���ַ�
    {
       a[i]=a[i]-32;
       i++;
    }
    cout<<a<<endl;
    return 0;
}
