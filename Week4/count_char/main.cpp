#include <iostream>

using namespace std;
//ͳ��������ַ������ַ��ܸ����� ��д��ĸ������Сд��ĸ���������ָ����������� ������

int main()
{
    int n=100,i=0,bignum=0,smallnum=0,num=0,othernum=0;

    char a[100];
    cin.getline(a,n);
    while(a[i]!='\0')
    {
        if(a[i]>='A' && a[i]<='Z')
                 bignum++;
        else
        {
              if(a[i]>='a' && a[i]<='z')
                  smallnum++;
              else
              {
                    if(a[i]>='0' && a[i]<='9')
                        num++;
                    else
                        othernum++;
              }
        }
        i++;
    }
    cout<<i<<' '<<bignum<<' '<<smallnum<<' '<<num<<' '<<othernum<<endl;
    return 0;
}
