#include <iostream>

using namespace std;

int main()
{
    int old_grade,new_grade,a;
    cin>>old_grade;
    a=old_grade/10;
    cout<<a<<endl;
    switch(a)
    {
        case(10):{new_grade=5;break;}
        case(9):{new_grade=5;break;}
        case(8):{new_grade=4;break;}
        case(7):{new_grade=3;break;}
        case(6):{new_grade=2;break;}
        default:{new_grade=1;}
    }
    cout<<new_grade<<endl;
    return 0;
}
