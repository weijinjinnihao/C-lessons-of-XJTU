#include <iostream>

using namespace std;

class Date
{
      int year,month,day;
public:
      Date(int y=1990,int m=0,int d=0){year=y;month=m;day=d;}
      bool operator >(Date &dd);//�����������ڵıȽϣ�
      ~Date(){};
};
//���ֵ�������ڴ�������ֵ��ȣ����·�ֵ�������ڴ�������ֵ��Ȳ����·�ֵҲ��ȣ����մ������ڴ�
bool Date::operator>(Date &dd)
{
      if (year>dd.year)return true;
      else if(year!=dd.year)return false;
      else if(month>dd.month) return true;
      else if(month!=dd.month)return false;
      else if(day>dd.day)return true;
      else
            return false;
}
int main()
{
    Date date1(2011,5,27);
    Date date2(2013,11,26);
    if (date1>date2)cout<<"date1����date2"<<endl;
    else
      cout<<"date1С��date2"<<endl;
    return 0;
}
