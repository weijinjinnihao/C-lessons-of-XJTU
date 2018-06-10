#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    float sum,money,rate;
    int year;
    cout<<"Please Enter money, rate, year\n";
    cin>>money>>rate>>year;
    sum=money*pow((1+rate),year);
    cout<<sum<<endl;
    return 0;
}
