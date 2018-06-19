#include <iostream>

using namespace std;

struct date
{
      int year;
      int month;
      int day;
};
int main()
{
    date d={2018,6,19};
    date *p;
    p=& d;

    cout << p->day<<' '<<(*p).day<<endl;
    return 0;
}
