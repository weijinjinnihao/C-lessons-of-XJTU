#include <iostream>

using namespace std;

class Date
{
private :
      int year,mon,day;
public:

      void get_date();
      int show_year()
      {
            return year;
      };
      bool Is_Leap_year();

};
void Date::get_date()
{
      cout<<"please enter year,month,day";
      cin>>year>>mon>>day;

      return;
}
bool Date::Is_Leap_year()
{
      if ((year%400==0) || ((year%100!=0) && (year%4==0)))
            return true;
      else
            return false;
}

int main()
{
    Date date1;
    int year;
    bool a;
    date1.get_date();
    year=date1.show_year();

    a=date1.Is_Leap_year();
    cout<<year<<endl;
    cout<<a<<endl;

    return 0;
}
