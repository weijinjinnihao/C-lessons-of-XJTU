#include <iostream>

using namespace std;
//����ָ�붯̬����n��Ԫ�ص�����
int main()
{
    int n,i;
    int *p;
    cin>>n;
    p=new int[n];
    for (i=0;i<n;i++)
    {
          cin>>p[i];
    }
    for (i=0;i<n;i++)
    {
          cout<<p[i];
    }
    return 0;
}
