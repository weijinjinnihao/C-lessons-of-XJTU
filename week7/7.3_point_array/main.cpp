#include <iostream>

using namespace std;
//计算一维数组元素的平均值，并能带回数组中的最大值与 最小值

float aver(int s[],int n,int *maax,int *miin)
{
      int i,sum=0;
      float average;
      *maax=*miin=s[0];

      for (i=0;i<n;i++)
      {
            sum=sum+s[i];
            if (s[i]>*maax) *maax=s[i];
            if (s[i]<*miin) *miin=s[i];
      }
      return(sum/n);
}
int main()
{
    int a[5]={1,2,3,4,5},maax,miin;
    float average;
    average=aver(a,5,&maax,&miin);
    cout<<average<<' '<<maax<<' '<<miin<<endl;

    return 0;
}
