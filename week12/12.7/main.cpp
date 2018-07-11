#include <iostream>

using namespace std;

class Date
{
      int year,month,day;
public:
      Date(int y=1990,int m=0,int d=0){year=y;month=m;day=d;}
      bool operator >(Date &dd);//定义两个日期的比较，
      ~Date(){};
};
//年份值大则日期大，如果年份值相等，则月份值大则日期大，如果年份值相等并且月份值也相等，则日大则日期大
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
    if (date1>date2)cout<<"date1大于date2"<<endl;
    else
      cout<<"date1小于date2"<<endl;
    return 0;
}
