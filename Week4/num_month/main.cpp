#include <iostream>

using namespace std;
//���û����������ת��Ϊ��Ӧ���·�
int main()
{
    char month[12][10]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
    int m;
    cin>>m;
    cout<<month[m-1];
    return 0;
}
