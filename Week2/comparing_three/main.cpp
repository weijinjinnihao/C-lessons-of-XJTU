#include <iostream>

using namespace std;

int main()
{
    int a,b,c,max;
    cin>>a>>b>>c;
    if (a<=b)
    {
        max=b;
        if(b<=c)
        {
            max=c;
        }
    }
    else
    {
        max=a;
    }
    cout<<max<<endl;
    return 0;
}
